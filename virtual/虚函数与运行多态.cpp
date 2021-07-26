#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : virtual
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/23 17:17:59
class Employee
{
public:
    virtual void raiseSalary()
    {
        cout << 0 << endl;
    }

    virtual void promote(){}
};

class Manager : public Employee {
    virtual void raiseSalary()
    {
        cout << 100 << endl;
    }

    virtual void promote(){}
};
class Engineer : public Employee {
    virtual void raiseSalary()
    {
        cout << 200 << endl;
    }

    virtual void promote(){}
};


void globalRaiseSalary(Employee* emp[], int n)
{   
    //虚函数调用取决于指针指向的对象类型，而不是指针本身的类型
    for (int i = 0; i < n; i++)
        emp[i]->raiseSalary(); 
                             
}

//int main() {
//    //emp作为Employee类型的指针数组
//    Employee* emp[] = { new Manager(),new Engineer };
//
//    
//    globalRaiseSalary(emp, 2);
//}