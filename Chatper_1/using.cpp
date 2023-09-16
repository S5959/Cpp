/**
 * p.16 using
*/

#include <iostream>
using std::cout;
using std::endl;

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30;
// namespace NameSpace1 { int a = 50; int b = 60; } // error: redefinition of 'a'
namespace NameSpace1 { int b = 50; }

int main()
{
    int a = 40;

    cout << NameSpace1::a << endl;    // 10
    cout << NameSpace2::a << endl;    // 20
    cout << ::a << endl;              // 30
    cout << a << endl;                // 40
    cout << NameSpace1::b << endl;    // 50

    return 0;
}