/**
 * p.88
 * 소스코드 3-4
*/

#include<iostream>
using namespace std;

// 화씨온도를 섭씨온도로 변환하는 함수 : main() 함수보다 뒤에 있으면 오류남
// 매개변수     float fahr : 화씨온도
// 반환값      섭씨온도(float)
float FahrToC(float fahr)
{
    fahr -= 32;
    return fahr * 5 / 9;
}

int main()
{
    float fTemp, cTemp;

    cout << "화씨 온도 : ";
    cin >> fTemp;                                   // 화씨 온도 : 75
    cTemp = FahrToC(fTemp);         // 함수호출(값 복사)
    cout << "---> 섭씨 온도 : " <<  cTemp << endl;     // 섭씨 온도 : 23.8889
    
    return 0;
}