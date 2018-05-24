#ifndef TABLE_H
#define TABLE_H
#include <string>
class Table {
public:
std::string table_name;
std::string table_alias;
virtual bool is_select_table() {return false;}
};
#endif