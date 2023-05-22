/*
 * @Author: 鲨鱼辣椒
 * @Date: 2023-05-15 10:24:35
 * @LastEditTime: 2023-05-22 16:13:22
 * @Description:
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved.
 */
#include "Includes.h"
// look 编译过程分为四步：预处理、编译、汇编、链接

constexpr int Constexpr_Func1(int a) {
    return a + 1;
}
constexpr int Constexpr_Func() {
    return 10;
}

void Constexpr_Test() {
    int a = 4;
    // look 由于a的值在运行期才能确认，无法赋值给 需要在编译期确认值的b
    // constexpr int b = a;
    cout << Constexpr_Func1(2) << endl;
    cout << Constexpr_Func() << endl;
 
}

const int Const_Func() {
    return 34;
}
const int Const_Func1(int b) {
    return b + 22;
}

void Const_Test() {
    // look const与 #define不同点在于，const具有类型，可以进行安全检查，define只是简单字符串替换，没有检查。
    // look 对于空间使用来讲，const给出对应内存地址运行过程只有一份拷贝，而define作为立即数有多份拷贝

    const int a = 4;
    // look 在编译阶段，使用const的地方都会直接用用 值 替换，而不是去内存寻址取值，
    cout << a << endl;

    // look 加上volatile 强制去内存寻址取值
    volatile const int b = 10;
    // look 加上(int *) 将const int*进行转换
    int *p = (int *)&b;
    // look 可以通过指针修改值
    *p = 6;
    cout << b << endl;

    cout << "=======================================" << endl;

    cout << Const_Func() << endl;
    cout << Const_Func1(22) << endl;

    cout << "=======================================" << endl;

    int c = 54;
    // look 跟constexpr不同，const变量在运行期确定
    const int d = c;
    cout << d << endl;
}