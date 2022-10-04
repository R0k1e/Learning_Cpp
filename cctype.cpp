#include <cctype>   // isalpha header file
#include <iostream>
int main (void)
{
    char ch;
    isalpha(ch); //是字母返回非0值，不是返回0
    ispunct(ch); //是标点返回1

}