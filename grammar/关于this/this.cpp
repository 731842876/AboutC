#include <iostream>
using namespace std;


// @File      : this_
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

//������̸̸thisָ����ô���
//
//��1��һ�������thisָ�벢���Ƕ������һ���֣�����Ӱ��sizeof(����)�Ľ����
//
//��2��this�������������ڲ���
//     ������ķǾ�̬��Ա�����з�����ķǾ�̬��Ա��ʱ�򣬱��������Զ���������ĵ�ַ��Ϊһ�������������ݸ�������
//     Ҳ����˵����ʹ��û��д��thisָ�룬�������ڱ����ʱ��Ҳ�Ǽ���this�ģ�����Ϊ�Ǿ�̬��Ա�����������βΣ��Ը���Ա�ķ��ʾ�ͨ��this����


//��Σ�thisָ���ʹ�ã�
//
//��1������ķǾ�̬��Ա�����з�����������ʱ��ֱ��ʹ�� return *this��
//
//��2�����������Ա��������ͬʱ����this->n = n ������д��n = n)��

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