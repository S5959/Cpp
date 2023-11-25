/***
 * 소스코드 5-6 (p.183), 5-10(p.189), 5-11(p.189), 소스코드 5-12(p.190)
*/
#ifndef COMPLEX2_H_INCLUDED
#define COMPLEX2_H_INCLUDED
#include<iostream>
using namespace std;

class Complex2 {
    double rPart, iPart;        // 실수부 및 허수부
public:
    // 생성자
    Complex2 (double r=0, double i=0) : rPart(r), iPart(i) {}
    Complex2 conj() const {
        return Complex2(rPart, -iPart);
    }
    Complex2 operator+(const Complex2& c) const;
    Complex2 operator+(double r) const;
    // 소스코드 5-10 설명
    double real() const { return rPart; }   // 실수부의 값 반환
    double imag() const { return iPart; }   // 허수부의 값 반환
    // 소스코드 5-11 설명
    friend Complex2 operator+(double r, const Complex2& c);
    // 소스코드 5-12
    Complex2& operator+=(const Complex2& c);
    // 소스코드 5-13
    bool operator==(const Complex2& c) const;
};
#endif