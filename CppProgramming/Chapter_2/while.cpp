/**
 * p.46
 * 소스코드 2-7
*/

#include <iostream>
using namespace std;

int main()
{
    int val, total = 0;
    cin >> val;          // 10

    while (val > 0) {
        total += val;
        cin >> val;     // 30 40 0
    }

    cout << "총 = " << total << endl;   // 총 = 80

    return 0;
}