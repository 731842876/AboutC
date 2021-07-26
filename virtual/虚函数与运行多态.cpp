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
    //�麯������ȡ����ָ��ָ��Ķ������ͣ�������ָ�뱾�������
    for (int i = 0; i < n; i++)
        emp[i]->raiseSalary(); 
                             
}

//int main() {
//    //emp��ΪEmployee���͵�ָ������
//    Employee* emp[] = { new Manager(),new Engineer };
//
//    
//    globalRaiseSalary(emp, 2);
//}