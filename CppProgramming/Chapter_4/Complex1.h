/**
 * 소스코드 4-22 (p.163)
*/
#ifndef COMPLEX1_H_INCLUDED
#define COMPLEX1_H_INCLUDED

class Complex1 {
    double rPart, iPart;        // 실수부 및 허수부
public:
    // 생성자
    Complex1(double r=0, double i=0) : rPart(r), iPart(i) {}
    Complex1 conj() const {
        return Complex1(rPart, -iPart);
    }
    Complex1 add(const Complex1& c) const {
        return Complex1(rPart + c.rPart, iPart + c.iPart);
    }
    Complex1 sub(const Complex1& c) const {
        return Complex1(rPart - c.rPart, iPart + c.iPart);
    }
    Complex1 mul(const Complex1& c) const;
    Complex1 div(const Complex1& c) const;
    void display() const;       // 복수부 값을 출력
};

#endif