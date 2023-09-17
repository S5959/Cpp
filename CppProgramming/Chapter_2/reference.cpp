/**
 * p.72
 * 소스코드 2-14
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    int &aRef = a;      // aRef는 정수형 변수 a에 대한 참조
    cout << aRef << endl;                                   // 10
    aRef = 100;
    cout << "a : " << a << ", aRef : " << aRef << endl;     // a : 100, aRef : 100
    aRef = b;
    cout << "a : " << a << ", aRef : " << aRef << endl;     // a : 20, aRef : 20
}