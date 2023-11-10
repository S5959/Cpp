/**
 * p.94
 * 소스코드 3-7
*/
#include<iostream>
using namespace std;
void RtnA(int x);
void RtnB(int &x);
const int a = 10;

int main() {

    RtnA(a);        // OK
    // RtnB(a);     // Error! - const 변수를 const가 아닌 참조 인수에 전달
    RtnB(const_cast<int&>(a));  // OK - const 한정어를 해제 : Error났음...

    return 0;
}

void RtnA(int x) {
    x = 20;
    cout << "RtnA : " << x << ", a: " << a << endl;
}

void RtnB(int &x) {
    int b = x;
    b = 20;
    cout << "RtnB : " << b << ", a: " << a << endl;
}