#include <iostream>
int main (void)
{
    // array name is a pointer, it maybe change the 
    // original content when using as a form parameters
    // can add a new pointer to tranverse the array
    // or add const before array name
    int a = 1;
    int *A = &a;
    const int * p = A;          // *p const ,can't change *p's value, can't change int 
    int const * p = A;      // the same 
    int * const p = &a;     // p is const, can change int, but can't pointer
}