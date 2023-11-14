/**
 * 소스코드 4-6(p.126)
*/
#ifndef COUNTER_H_INCLUDED
#define COUNTER_H_INCLUDED

class CounterM {            // 클래스 CounterM의 선언 시작
    const int maxValue;     // 계수기의 최댓값
    int value;              // private 데이터 멤버
public:             // public 멤버 변수
    CounterM(int mVal) : maxValue(mVal), value(0) {}   //생성자 - 교재에는 'value{0} {}'로 표기되어 있지만 에러남
    void reset()            // 계수기의 값을 0으로 지움
        { value = 0; }
    void count()            // 계수기의 값을 1 증가시킴
        { value = value < maxValue ? value + 1 : 0; }
    int getValue() const    // 계수기의 현재 값을 반환함
        { return value; }
};

#endif  // COUNTER_H_INCLUDED