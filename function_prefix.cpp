#include <iostream>
int main (void)
{
    // 数组名是指针，传参时可能被修改
    // 可以加const避免修改
    int a = 1;
    int *A = &a;
    const int * p = A;      
    int const * p = A;    //int 值不可修改  
    int * const p = &a;   // 地址不可修改
    int (*a)[4];          //a是指向int数组的指针
    int *a[4];            //a是int指针的数组
    
}