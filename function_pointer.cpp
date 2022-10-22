#include <iostream>
double pam(int); //函数原型
int main (void)
{
    double (*pf)(int); //指向函数的指针
    pf = pam; //函数名即为函数地址
    // *pf和pam一样用
    double x = pam(4);
    double y = pf(5);
    

}