/**
 * p.46
 * 소스코드 2-8
*/

#include <iostream>
using namespace std;

int main()
{
    int val, total = 0;
    
    for (cin >> val; val > 0; cin >> val) {
        total += val;                   // 30 10 55 25 0
    }

    cout << "총 = " << total << endl;   // 총 = 120

    return 0;
}