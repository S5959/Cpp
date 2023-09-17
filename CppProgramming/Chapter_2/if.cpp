/**
 * p.42
 * 소스코드 2-2
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10;

    cout << "기존 a의 값 : " << a << ", 기존 b의 값 : " << b << endl;   // 기존 a의 값 : 5, 기존 b의 값 : 10

    if (a < b) {
        int t = a;
        a = b;
        b = t;
    }

    cout << "변경 a의 값 : " << a << ", 변경 b의 값 : " << b << endl;   // 변경 a의 값 : 10, 변경 b의 값 : 5

    return 0;
}