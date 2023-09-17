/**
 * p.45
 * 소스코드 2-5
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;

    for (int a : arr) {
        sum += a;
    }

    cout << "합계 = " << sum << endl;   // 합계 = 55

    return 0;
}