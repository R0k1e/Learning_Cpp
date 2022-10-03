#include <iostream>
#include <vector>
#include <array>
int main(void)
{
    using namespace std;
    int ai[5] = {1, 2, 3, 4, 5};
    for (int x : ai)
        cout << x << endl;

    array<int, 5> a1 = {1, 2, 3, 4, 5};
    for (int x : a1)
        cout << x << endl;

    vector<int> a2(5);
    a2 = {2, 3, 4, 5, 6};
    for (int x : a2)
        cout << x << endl;
    //基于范围的for循环
}