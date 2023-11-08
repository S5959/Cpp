/** 
 * p.85 ~ p.86
 * 소스코드 3-3
*/
#include<iostream>
using namespace std;
double variance(const double arr[], int size);

int main() 
{
    double a[50], b[100];
    // 생략 - a와 b에 각각 50개와 100개의 데이터 입력
    for (int i=0; i<50; i++) a[i] = i;
    for (int i=0; i<100; i++) b[i] = i;

    cout << variance(a, 50) << endl;
    cout << variance(b, 100) << endl;

    return 0;
}

double variance(const double arr[], int size)
{
    double sum = 0, sqSum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        sqSum += arr[i] * arr[i];
    }

    return sqSum / size - sum * sum / (size * size);
}