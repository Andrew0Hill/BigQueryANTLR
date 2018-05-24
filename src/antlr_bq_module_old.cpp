#include <Python.h> // Keep Python.h as the first #include in the file.
#include "antlr4-runtime.h"
#include "SQLiteLexer.h"
#include "SQLiteParser.h"
#include "SQLiteBaseListener.h"
#include <string>
#include <vector>


//using namespace antlrbq;
static std::vector<PyObject*> callbacks(1);
static SQLiteLexer* lexer = NULL;
static SQLiteParser* parser = NULL;
static antlr4::tree::ParseTree* tree;
static antlr4::tree::ParseTreeWalker walker;

class Python_SQL_Listener : public SQLiteBaseListener {
public:

	void enterColumn_name(SQLiteParser::Column_nameContext *ctx) override {
		if (callbacks[0] != NULL) {
			std::string id_string = ctx->getText();
			PyEval_CallFunction(callbacks[0], "(s)", id_string.c_str());
			//PyErr_SetString(PyExc_TypeError, id_string.c_str());
			//Py_DECREF(r_args);
		}
	}
};

static Python_SQL_Listener listener;

// Function to parse a string passed as an argument.
static PyObject* parse(PyObject* self, PyObject* args) {

	char* temp_string;

	// Get the string passed in as an argument. 
	if (PyArg_ParseTuple(args, "s", &temp_string)) {
		std::string parse_string(temp_string);
		try{
		if (lexer == NULL) {
			lexer = new SQLiteLexer(new antlr4::ANTLRInputStream(parse_string));
			parser = new SQLiteParser(new antlr4::CommonTokenStream(lexer));
		}
		else {
			lexer->setInputStream(new antlr4::ANTLRInputStream(parse_string));
			parser->setTokenStream(new antlr4::CommonTokenStream(lexer));
		}

			tree = parser->parse();
		}
		catch (antlr4::RuntimeException e) {
			Py_IncRef(Py_None);
			PyObject* r_val = Py_None;
			return r_val;
		}
		walker.walk(&listener, tree);
	}
	Py_IncRef(Py_None);
	PyObject* r_val = Py_None;
	return r_val;
}


/*
int add_func(int a, int b)
{
return a+b;
}

static PyObject* add(PyObject* self, PyObject* args)
{
int a, b;
if (!PyArg_ParseTuple(args, "ii", &a, &b))
return NULL;
return Py_BuildValue("i", add_func(a,b));
}
*/
static PyObject* set_column_callback(PyObject* self, PyObject* args) {
	PyObject* callback;
	PyObject* result = NULL;
	if (PyArg_ParseTuple(args, "O:set_column_callback", &callback)) {
		if (!PyCallable_Check(callback)) {
			PyErr_SetString(PyExc_TypeError, "argument to set_column_callback must be callable");
			return NULL;
		}
		Py_XINCREF(callback);
		Py_XDECREF(callbacks[0]);
		callbacks[0] = callback;

		Py_IncRef(Py_None);
		result = Py_None;
	}
	return result;
}


static PyMethodDef antlr_bq_methods[]{
	{ "parse", (PyCFunction)parse, METH_VARARGS, "Parses a string." },
	{ "set_column_callback", (PyCFunction)set_column_callback, METH_VARARGS, "Sets the callback for column ids" },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef antlr_bq_module = {
	PyModuleDef_HEAD_INIT,
	"antlrbq",
	"Implementation of a BigQuery query parser using ANTLR v4.",
	-1,
	antlr_bq_methods
};

PyMODINIT_FUNC PyInit_antlrbq(void)
{
	return PyModule_Create(&antlr_bq_module);
}