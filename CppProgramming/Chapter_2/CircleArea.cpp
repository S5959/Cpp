/**
 * p.30 
 * 소스코드 2-1
*/

#include <iostream>
using namespace std;

int main()
{
    const double PI { 3.14159 };
    double radius;

    cout << "원의 반경을 입력하시오 : ";
    cin >> radius;                          // 원의 반경을 입력하시오 : 5
    
    double area = radius * radius * PI;
    cout << "원의 면적 = " << area << endl;   // 원의 면적 = 78.5397

    return 0;
}