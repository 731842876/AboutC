#include <iostream>
using namespace std;


// @File      : enum_
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

//作用域不受限, blue会容易引起命名冲突。
//enum Color { RED, BLUE };
//enum Feeling { EXCITED, BLUE };

//解决方案是利用命名空间
namespace Color
{
    enum Type
    {
        RED = 15,
        //会隐式转换为int
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

//C++11 标准中引入了“枚举类
//新的enum的作用域不在是全局的
//不能隐式转换成其他类型,需要加上static_cast
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

    //const 数据成员只在某个对象生存期内是常量
    //类的对象未被创建时，编译器不知道 SIZE 的值是什么
    /*const int size = 100;
    int nums[size];*/

};

//正确写法
class B
{
public:
    const int Size;
    B(int size):Size(size) {

    }
};

//使用枚举常量建立在整个类中都恒定的常量,不会占用对象空间，编译前完成赋值
//缺点就是隐式转换成int，最大值有限，不能使用浮点

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