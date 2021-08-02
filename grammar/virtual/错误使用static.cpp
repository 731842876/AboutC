#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : 错误使用static
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/23 18:14:08


//virtual static void fun();
//因为static静态函数不属于任何一个类的实例，virtual加上没意义，实现不了多态
//static void fun1()const {};
//
//int main() {
//
//}