/**
 * p.13 소스코드 1-2 : Namespace.cpp
 * */

#include <iostream>

namespace NameSpace1 { int a = 10; }
namespace NameSpace2 { int a = 20; }
int a = 30;
namespace NameSpace1 { int b = 50; }

int main() 
{
    int a = 40;

    std::cout << NameSpace1::a << std::endl;    // 10
    std::cout << NameSpace2::a << std::endl;    // 20
    std::cout << ::a << std::endl;              // 30
    std::cout << a << std::endl;                // 40
    std::cout << NameSpace1::b << std::endl;    // 50

    return 0;
}