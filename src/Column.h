#ifndef COLUMN_H
#define COLUMN_H
#include "QueryPart.h"
#include <string>
#include <iostream>
#include <vector>
class Column{
    public:
    std::string alias;
    std::string real_name;
    std::string table_name;
    std::string table_alias_name;
    std::vector<QPart> context;
    Column(std::string al, std::string rn, std::string tn, std::vector<QPart> ctxt){
        alias = al;
        real_name = rn;
        table_name = tn;
        table_alias_name = tn;
        context = ctxt;
    }
    Column(){};


};

inline std::ostream& operator<<(std::ostream& output, const Column& c){
        output << "Column Alias: " << c.alias << " Column Real Name: " << c.real_name << " Table Name: " << c.table_name << " Table Context: " << std::endl;
        for(auto it = c.context.rbegin(); it != c.context.rend(); ++it){
            output << *it << std::endl;
        } 
        return output;
}
#endif