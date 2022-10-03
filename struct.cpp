#include <string>
#include <iostream>
#include <vector> //模板类
#include <array>
struct inflatable
{
    int a;
    char b;
    std::string c;   //或者在struc之前写using namespace std
};


using namespace std;
union ABC
{
    int a;
    char b;
    //不能直接添加复杂结构如string
};// 可以存储 int char string 三个中的一个，不能同时储存


enum alphabet {a,b,c,d,e,f,g}; //枚举类型，后面a到g对应0~6

int main ()
{
    inflatable A = {1,'a',"AAA"}; //不用加struct 
    inflatable B  {
        2,
        'b',
        "BBB"
    };
    A = B; //相同结构之间可以直接赋值

    ABC un1on;
    un1on.a = A.a;
    cout << un1on.a << endl;
    un1on.b = A.b;
    cout << un1on.b << endl;

    int *pt = new int; //new 根据后面类型分配一个数据块地址给指针
    //new  分配数据在堆中不在栈，变量在栈
    delete pt;//释放pt指向的内存 
    // 只能是new分配的，不能释放变量内存，也不能释放已经释放掉的
    //可以delete空指针
    int *psome = new int [10]; //创建10个元素的数组
    delete [] psome; // 释放psome的全部内存块，而不只是第一个
    //new有[]则delete也有[]
    //数组名是常量不能更改
    
    const char *bird = "bird";
    cout << bird ; //给cout一个地址，cout会输出至遇到\0

    vector<int> vi; //模板类，是new创建动态数组的替代品
    //要include vector
    using namespace std; //vector在std中
    int n=5;
    vector <double> vd(n); //可以用变量初始化大小
    //内容不能直接加=初始化
    //内容存储在堆中
    vd = {1,2,3,4,5};


    //include array
    //using namespace std
    array<int,5> a1 = {1,2,3,4};
    array<int,5> a2;
    a2 = a1; //可以相互赋值，不用挨个复制
    a1.at(1) = 4; //at函数可以捕获非法索引
    //不能用变量初始化array
    //内容存储在栈中
}