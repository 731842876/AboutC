/*
 * @Author: 鲨鱼辣椒
 * @Date: 2023-05-14 16:45:58
 * @LastEditTime: 2023-05-14 20:31:22
 * @Description: 指针和引用
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved.
 */

#include "Includes.h"

int PointAndReference_Add(int a, int b) {
    return a + b;
}

void PointAndReference_Test() {
    int a = 3;
    int b = 4;
    int c = 5;
    int d = 11;
    int f = 98;

    // look &：一个是取地址符作用，另一个是引用
    cout << &a << endl;

    // look 作为引用，声明必须初始化
    // look int &test=10 初始值不能为 值
    // look int &test=a+1 a+1表达式结果
    // look int &test = PointAndReference_Add(99, 2); 不能

    // look 加上const作为常量引用，可以初始化为 值
    const int &test = 7.4 + 6.1;
    cout << test << endl;
    // look 加上const作为常量引用，可以初始化为 表达式
    const int &testFun = PointAndReference_Add(9, 9);
    cout << testFun << endl;

    int &name = a;
    name = 10016;
    cout << name << endl;
    cout << a << endl;

    // look 变量前加*号，只有在变量为指针情况下才是合法的
    // look 当*用于定义时，是标明该变量为指针类型
    // look 除此以外，*的作用是取值。
    int *p = &b;
    // look 查看b变量的地址
    cout << &b << endl;
    cout << *p << endl;
    // look 直接输出p指针，等于打印p指向地址，即b的地址，加*则解引用读取b地址的值
    cout << p << endl;
    // look 加&取指针p本身的地址
    cout << &p << endl;

    cout << "===================================" << endl;
    int *pc = &c;
    int **ppc = nullptr;
    ppc = &pc;
    cout << &c << endl;
    cout << pc << endl;
    // look 解一次引用等于输出 pc的值，即pc指向的地址
    cout << *ppc << endl;
    cout << **ppc << endl;

    cout << "===================================" << endl;

    // look &定义时必须初始化，所以本身不是一个对象，*指针无法指向它
    // look 但指针是个对象，存在指针的引用
    // look 从右往左阅读有利于理解，rpd最右边&代表它是个引用，然后是 int* 类型
    int *pd = &d;
    int *&rpd = pd;
    cout << *rpd << endl;

    int &test2 = *pd;
    cout << test2 << endl;
    cout << "===================================" << endl;

    int arr[10] = {};
    int *pf = &f;
    int &namef = f;

    // look &namef = a;无法重新绑定其他对象
    // look name = a; 该操作为赋值而不是重新绑定对象

    // look 数组的引用，不存在引用的数组
    // look 因为左结合会导致nameArr跟[]结合，所以要加括号，代表nameArr作为引用，再与[10]结合表示数组的引用
    int(&nameArr)[10] = arr;
    cout << nameArr[1] << endl;

    cout << sizeof(pf) << endl;
    cout << sizeof(name) << endl;

    // look 有了指针为什么还需要引用：

    // 为了支持函数运算符重载，且使用指针经常犯的错：

    // 操作空指针

    // 操作野指针

    // 无意间改变了指针的值

    // look 有了引用为什么还需要指针：为了兼容C语言
}
