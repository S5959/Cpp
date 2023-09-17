/**
 * p.44
 * 소스코드 2-4
*/

#include <iostream>
using namespace std;

int main()
{
    int val, total = 0;

    for (int i = 0; i < 10; i++) {
        cin >> val;                     // 10 20 30 40 50 60 70 80 90 100
        total += val;
    }

    cout << "총 : " << total << endl;   // 총 : 550

    return 0;
}