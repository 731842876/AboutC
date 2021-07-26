#include <iostream>
using namespace std;


// @File      : this_
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

//首先来谈谈this指针的用处：
//
//（1）一个对象的this指针并不是对象本身的一部分，不会影响sizeof(对象)的结果。
//
//（2）this作用域是在类内部，
//     当在类的非静态成员函数中访问类的非静态成员的时候，编译器会自动将对象本身的地址作为一个隐含参数传递给函数。
//     也就是说，即使你没有写上this指针，编译器在编译的时候也是加上this的，它作为非静态成员函数的隐含形参，对各成员的访问均通过this进行


//其次，this指针的使用：
//
//（1）在类的非静态成员函数中返回类对象本身的时候，直接使用 return *this。
//
//（2）当参数与成员变量名相同时，如this->n = n （不能写成n = n)。

class Person {

public:
    typedef enum {
        BOY = 0,
        GIRL
    }SexType;

    Person(string n, int a, SexType s) {
        name = n;
        age = a;
        sex = s;
    }
    int get_age() const {

        return this->age;
    }
    Person& add_age(int a) {
        age += a;
        return *this;
    }
    ~Person() {
       
    }
private:
    string name;
    int age;
    SexType sex;
};

//int main() {
//    Person p("zhangsan", 20, Person::BOY);
//    cout << p.get_age() << endl;
//    p.add_age(10);
//    cout << p.get_age() << endl;
//}