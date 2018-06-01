#include <Python.h> // Keep Python.h as the first #include in the file.
#include "antlr4-runtime.h"
#include "bigqueryLexer.h"
#include "bigqueryParser.h"
#include "bigqueryBaseListener.h"
#include "SelectTable.h"
#include "Python_SQL_Listener.h"
#include <string>
#include <vector>
#include <memory>
#include <iostream>
//using namespace antlrbq;
static std::vector<PyObject*> callbacks(1);
static bigqueryLexer* lexer = NULL;
static bigqueryParser* parser = NULL;
static antlr4::tree::ParseTree* tree;
static antlr4::tree::ParseTreeWalker walker;



static Python_SQL_Listener listener;

// Function to parse a string passed as an argument.
static PyObject* parse(PyObject* self, PyObject* args) {
	listener.reset();
	char* temp_string;

	// Get the string passed in as an argument. 
	if (PyArg_ParseTuple(args, "s", &temp_string)) {
		std::string parse_string(temp_string);
		try{
			lexer->setInputStream(new antlr4::ANTLRInputStream(parse_string));
			parser->setTokenStream(new antlr4::CommonTokenStream(lexer));
			tree = parser->parse();
		}
		catch (antlr4::RuntimeException e) {
			Py_IncRef(Py_None);
			PyObject* r_val = Py_None;
			return r_val;
		}
		walker.walk(&listener, tree);
	}
	// Create a new PyDictionary object.
	PyObject* return_dict = PyDict_New();
	// Create a vector of return lists for each query context.
	std::vector<PyObject*> return_list(5);
	std::vector<Column> parsed_columns;

	listener.get_columns(parsed_columns);
	for(int i = 0; i < 5; ++i){
		return_list[i] = PyList_New(0);
		Py_IncRef(return_list[i]);
	}
	if(!parsed_columns.empty()){
		SortedColumns sc(parsed_columns);
		for(Column &c : sc.SELECT_columns){
			PyObject* col_dict = PyDict_New();
			PyDict_SetItemString(col_dict,"name",PyUnicode_FromString(c.real_name.c_str()));
			PyDict_SetItemString(col_dict,"alias",PyUnicode_FromString(c.alias.c_str()));
			PyDict_SetItemString(col_dict,"table",PyUnicode_FromString(c.table_name.c_str()));
			PyList_Append(return_list[0], col_dict);
		}

		for(Column &c : sc.WHERE_columns){
			PyObject* col_dict = PyDict_New();
			PyDict_SetItemString(col_dict,"name",PyUnicode_FromString(c.real_name.c_str()));
			PyDict_SetItemString(col_dict,"alias",PyUnicode_FromString(c.alias.c_str()));
			PyDict_SetItemString(col_dict,"table",PyUnicode_FromString(c.table_name.c_str()));
			PyList_Append(return_list[1], col_dict);
		}

		for(Column &c : sc.GROUP_BY_columns){
			PyObject* col_dict = PyDict_New();
			PyDict_SetItemString(col_dict,"name",PyUnicode_FromString(c.real_name.c_str()));
			PyDict_SetItemString(col_dict,"alias",PyUnicode_FromString(c.alias.c_str()));
			PyDict_SetItemString(col_dict,"table",PyUnicode_FromString(c.table_name.c_str()));
			PyList_Append(return_list[2], col_dict);
		}

		for(Column &c : sc.WITH_columns){
			PyObject* col_dict = PyDict_New();
			PyDict_SetItemString(col_dict,"name",PyUnicode_FromString(c.real_name.c_str()));
			PyDict_SetItemString(col_dict,"alias",PyUnicode_FromString(c.alias.c_str()));
			PyDict_SetItemString(col_dict,"table",PyUnicode_FromString(c.table_name.c_str()));
			PyList_Append(return_list[3], col_dict);
		}

		for(Column &c : sc.JOIN_columns){
			PyObject* col_dict = PyDict_New();
			PyDict_SetItemString(col_dict,"name",PyUnicode_FromString(c.real_name.c_str()));
			PyDict_SetItemString(col_dict,"alias",PyUnicode_FromString(c.alias.c_str()));
			PyDict_SetItemString(col_dict,"table",PyUnicode_FromString(c.table_name.c_str()));
			PyList_Append(return_list[4], col_dict);
		}

	}
	Py_IncRef(return_dict);

	PyDict_SetItemString(return_dict, "SELECT", return_list[0]);
	PyDict_SetItemString(return_dict, "WHERE", return_list[1]);
	PyDict_SetItemString(return_dict, "GROUP_BY", return_list[2]);
	PyDict_SetItemString(return_dict, "WITH", return_list[3]);
	PyDict_SetItemString(return_dict, "JOIN", return_list[4]);

	return return_dict;
}

static PyMethodDef antlr_bq_methods[]{
	{ "parse", (PyCFunction)parse, METH_VARARGS, "Parses a string." },
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
	// Initialize the lexer and parser.
	// Initially, there is not string to parse, so we set the input stream to an empty string.
	// The first time that parse is called, we will set the input stream to the string that we are given in the input function.
	lexer = new bigqueryLexer(new antlr4::ANTLRInputStream(""));
	parser = new bigqueryParser(new antlr4::CommonTokenStream(lexer));

	return PyModule_Create(&antlr_bq_module);
}