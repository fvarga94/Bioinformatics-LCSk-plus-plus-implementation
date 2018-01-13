#ifndef _LCSKPP_H_
#define _LCSKPP_H_

#include <vector>
#include <string>
#include <unordered_map>
#include <tuple>

#include "FenwickMaxTree.h"

std::unordered_map<char,uint8_t> alphabet(std::string& a, std::string& b);

std::vector<std::tuple<int,int,int>>* get_events(std::string& a, std::string& b, int k);

#endif // _LCSKPP_H_

