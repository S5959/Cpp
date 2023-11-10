/**
 * p.102 ~ p.103
 * 소스코드 3-10
*/
#include<iostream>
using namespace std;

// 두 변수의 값을 바꾸는 함수
// 인수    int &x, int &y   : 값을 바꿀 변수
// 반환값   없음
inline void SwapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "두 수를 입력하시오 : ";
    cin >> a >> b;
    if(a < b) SwapValues(a, b);
    cout << "큰 수 = " << a << ", 작은 수 = " << b << endl;

    return 0;
}