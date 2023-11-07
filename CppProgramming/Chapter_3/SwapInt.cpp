#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    if (a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << " 작은 수 = " << b << endl;

    return 0;
}

void SwapValues(int& x, int&y)
{
    int temp = x;
    x = y;
    y = temp;
}
