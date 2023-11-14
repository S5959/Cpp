/**
 * 소스코드 4-2(p.120), 소스코드 4-4(p.125)
*/

#include<iostream>
#include "Counter.h"
using namespace std;

int main()
{
    Counter cnt;        // Counter 객체의 정의 - value는 자동적으로 0이 됨
    // cnt.reset();        // 계수기를 0으로 지움 - 생성자로 초기화하여 생략 가능
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;
    cnt.count();        // 계수기를 1 증가시킴
    cnt.count();
    cout << "계수기의 현재 값: " << cnt.getValue() << endl;

    return 0;
}