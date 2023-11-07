#include<iostream>
using namespace std;

struct SalesRec
{
    char pID[10];
    int dYear, dMonth, dDate;
    char deliverAddr[40];
};

void PrSalesRec(SalesRec srec)
{
    cout << "품목코드 : " << srec.pID << endl;
    cout << "배달일자 : " << srec.dYear << "년";
    cout << srec.dMonth << "월";
    cout << srec.dDate << "일" << endl;
    cout << "배달주소 : " << srec.deliverAddr << endl;
}

int main()
{
    return 0;
}