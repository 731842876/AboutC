#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : output
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/26 16:52:44

//ÔËÐÐÊä³ö
void que1() {
	int countx = 0;
	int x = 9999;
	while (x)

	{

		countx++;

		x = x & (x - 1);
		cout << x << endl;

	}
	cout << countx << endl;
}

int ax = 4;
int& f(int x)
{
	ax = ax + x;
	return ax;

}

//int main() {
//	int t = 5;
//
//	cout << f(t) << endl; //a = 9
//	f(t) = 20; //a = 20
//	cout << f(t) << endl; //t = 5, a = 20 a = 25
//	t = f(t); //a = 30 t = 30
//	cout << f(t) << endl;//t = 60
//}