#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : test
// @Author    : ATLAS
// @brief     : 在其他文件访问
// @Time      : 2021/6/28 17:57:40

//非const变量默认为extern，无需初始化
int test = 10;

//要使const变量能够在其他文件中访问，必须在文件中显式地指定它为exter，必须为初始化，因为常量。
extern const int test2 = 11;
