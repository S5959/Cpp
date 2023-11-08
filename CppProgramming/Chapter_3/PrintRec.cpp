/**
 * p.92 ~ p.93
 * 소스코드 3-6
*/

#include<iostream>
using namespace std;

struct SalesRec {
    char    pID[10];
    int     dYear, dMonth, dDate;
    char    deliverAddr[40];
};

void PrSalesRec(const SalesRec &srec)  // srec은 상수 인수
{
    cout << "품목코드 : " << srec.pID << endl;              // 품목코드 : C25TV001
    cout << "배달일자 : " << srec.dYear << "년";
    cout << srec.dMonth << "월";
    cout << srec.dDate << "일" << endl;                   // 배달일자 : 2019년11월15일
    cout << "배달주소 : " << srec.deliverAddr << endl;      // 배달주소 : 서울시 종로구 대학로86
}

int main()
{
    SalesRec s = {"C25TV001", 2019, 11, 15, "서울시 종로구 대학로86"};
    PrSalesRec(s);
    return 0;
}