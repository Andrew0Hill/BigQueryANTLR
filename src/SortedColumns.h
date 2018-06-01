#ifndef SORTED_COLUMNS_H
#define SORTED_COLUMNS_H
#include "Column.h"
#include "QueryPart.h"
#include <vector>
class SortedColumns{
    public:
        inline SortedColumns(std::vector<Column> &all_columns){
            for(Column &c : all_columns){
                if(c.context.empty()){
                    continue;
                }
                if(c.context.front() == QueryPart::WITH){
                    WITH_columns.push_back(c);
                }else if(c.context.back() == QueryPart::SELECT){
                    SELECT_columns.push_back(c);
                }else if(c.context.back() == QueryPart::GROUP_BY){
                    GROUP_BY_columns.push_back(c);
                }else if(c.context.back() == QueryPart::WHERE){
                    WHERE_columns.push_back(c);
                }else if(c.context.back() == QueryPart::JOIN){
                    JOIN_columns.push_back(c);
                }
            }
        }
        std::vector<Column> WITH_columns;
        std::vector<Column> SELECT_columns;
        std::vector<Column> GROUP_BY_columns;
        std::vector<Column> WHERE_columns;
        std::vector<Column> JOIN_columns;
};
#endif