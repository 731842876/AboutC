#include <iostream>
using namespace std;


// @File      : enum_
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

//����������, blue����������������ͻ��
//enum Color { RED, BLUE };
//enum Feeling { EXCITED, BLUE };

//������������������ռ�
namespace Color
{
    enum Type
    {
        RED = 15,
        //����ʽת��Ϊint
        YELLOW,
        BLUE
    };
};

namespace Feeling {
    enum Type
    {
        RED = 15,
        YELLOW,
        BLUE
    };
}

//C++11 ��׼�������ˡ�ö����
//�µ�enum������������ȫ�ֵ�
//������ʽת������������,��Ҫ����static_cast
//

enum class Color2
{
    RED = 15,
    YELLOW = 'y',
    BLUE
};


class A
{
public:

    //const ���ݳ�Աֻ��ĳ���������������ǳ���
    //��Ķ���δ������ʱ����������֪�� SIZE ��ֵ��ʲô
    /*const int size = 100;
    int nums[size];*/

};

//��ȷд��
class B
{
public:
    const int Size;
    B(int size):Size(size) {

    }
};

//ʹ��ö�ٳ����������������ж��㶨�ĳ���,����ռ�ö���ռ䣬����ǰ��ɸ�ֵ
//ȱ�������ʽת����int�����ֵ���ޣ�����ʹ�ø���

class C
{
public:
    typedef enum {
        BOY=1,
        GIRL=0
    }SexType;
};
//int main() {
//    Color::Type c = Color::RED;
//    cout << c << endl;
//
//    Color2 c2 = Color2::RED;
//    cout << static_cast<int>(c2) << endl;
//    Color2 c3 = Color2::YELLOW;
//    cout << static_cast<char>(c3) << endl;
//
//    cout << C::BOY << endl;
//}