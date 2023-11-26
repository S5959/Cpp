/***
 * 소스코드 5-7(p.185), 5-8(p.186), 5-9(p.186), 5-10(p.189), 5-11(p.189), 5-12(p.190), 5-13(p.191)
*/
#include <iostream>
#include "Complex2.h"

// 소스코드 5-7
Complex2 Complex2::operator+(const Complex2& c) const
{
    Complex2 tmp(*this);
    tmp.rPart += c.rPart;
    tmp.iPart += c.iPart;
    return tmp;
}

// 소스코드 5-8
Complex2 Complex2::operator+(const Complex2& c) const
{
    return Complex2(rPart + c.rPart, iPart + c.iPart);
}

// 소스코드 5-9
Complex2 Complex2::operator+(double r) const
{
    return Complex2(rPart + r, iPart);
}

// 소스코드 5-10
// Complex2 operator+(double r, const Complex2& c)
// {
//     return Complex2(r + c.rPart(), c.iPart());      // 오류 발생 : rPart, iPart는 c의 private 데이터 멤버
// }

// 소스코드 5-11
Complex2 operator+(double r, const Complex2& c)
{
    return Complex2(r + c.real(), c.imag());
}

// 소스코드 5-12 (코드 수정본)
Complex2& Complex2::operator+=(const Complex2& c)
{
    this->rPart += c.rPart;
    this->iPart += c.iPart;
    return *this;
}

// 소스코드 5-13
bool Complex2::operator==(const Complex2& c) const
{
    return rPart == c.rPart && iPart == c.iPart;
}

// 소스코드 5-14
ostream& operator<<(ostream& os, const Complex2& c)
{
    // os << "(" << c.rPart;   // 실수부 출력
    // if (c.iPart > 0) os << "+j" << c.iPart;     // 허수부 출력
    // else if (c.iPart < 0) os << "-j" << c.iPart;
    cout << ")";

    return os;
}

