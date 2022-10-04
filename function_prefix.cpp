#include <iostream>
int main (void)
{
    // 数组名是指针，传参时可能被修改
    // 可以加const避免修改
    int a = 1;
    int *A = &a;
    const int * p = A;      
    int const * p = A;      
    int * const p = &a;     
}