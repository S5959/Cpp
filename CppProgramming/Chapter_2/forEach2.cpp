/**
 * p.45
 * 소스코드 2-6
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int a : arr) {
        ++a;
        cout << a << " ";   // 2 3 4 5 6 7 8 9 10 11
    }

    return 0;
}