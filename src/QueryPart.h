#ifndef QUERY_PART_H
#define QUERY_PART_H
#include <string>
#include <unordered_set>
typedef std::string QPart;
namespace QueryPart{
    static const std::unordered_set<std::string> context_set = {"SELECT", "GROUP BY", "WITH", "WHERE"};
    static const std::string SELECT = "SELECT";
    static const std::string GROUP_BY = "GROUP BY";
    static const std::string WITH = "WITH";
    static const std::string WHERE = "WHERE";
}
#endif