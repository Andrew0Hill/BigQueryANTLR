from distutils.core import setup, Extension
import os

dir_path =  os.path.dirname(os.path.realpath(__file__))
sources_list = [
    "src/antlr_bq_module.cpp",
    "src/bigqueryBaseListener.cpp",
    "src/bigqueryLexer.cpp",
    "src/bigqueryListener.cpp",
    "src/bigqueryParser.cpp",
    "src/SelectTable.cpp"
]
antlrbq = Extension(
    name='antlrbq', 
    sources = sources_list, 
    extra_compile_args = ["-std=c++11","-Wl, -rpath=/usr/local/lib/"],
    include_dirs=['/usr/local/include','/usr/local/include/antlr4-runtime/'],
    library_dirs=['/usr/local/lib'],
    libraries=["antlr4-runtime"])

setup(name = "antlrbq", version = "1.0", ext_modules = [antlrbq])
