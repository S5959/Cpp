/**
 * 소스코드 5-3 (p.180)
*/
#ifndef PENCILS_H_INCLUDED
#define PENCILS_H_INCLUDED

class Pencils {
    int dozens;     // 타
    int np;         // 날개
public:
    Pencils() : dozens(0), np(0) {};
    Pencils(int n) { dozens = n / 12; np = n % 12; }
    Pencils(int d, int n) : dozens(d), np(n) {}
    Pencils& operator++();
    Pencils operator++(int);
    void display() const;
};
#endif