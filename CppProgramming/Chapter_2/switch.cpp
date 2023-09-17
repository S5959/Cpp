/**
 * p.43 ~ 44 
 * 소스코드 2-3
*/

#include <iostream>
using namespace std;

int main()
{
    int score;
    char grade;

    cout << "점수 : ";
    cin >> score;                   // 점수 : 88

    switch (score / 10) {
    case 10:
    case 9: grade = 'A'; 
            break;
    case 8: grade = 'B';
            break;
    case 7: grade = 'C';
            break;
    case 6: grade = 'D';
            break;
    default: grade = 'F';
    }

    cout << "등급 : " << grade;     // 등급 : B

    return 0;
}