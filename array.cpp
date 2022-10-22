#include <array>
#include <iostream>
int main (void)
{
    using namespace std;
    //include array
    //using namespace std
    array<int,4> a1 = {1,2,3,4};
    array<int,4> a2;
    a1 = a2; //可以相互赋值，不用挨个复制
    a1.at(1) = 4; //at函数可以捕获非法索引
    //不能用变量初始化array
    //内容存储在栈中

    array <int,4> *a3; //指向array的指针
    //array还可以存储类对象
}