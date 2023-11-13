/**
 * 소스코드 4-1(p.118), 소스코드 4-3(p.124), 소스코드 4-5(p.125)
*/
#ifndef COUNTER_H_INCLUDED     // Counter.h가 중복 include 되지 않았는지 검사

#define COUNTER_H_INCLUDED     // Counter.h가 처음 include될 때 정의됨

class Counter {     // 클래스 Counter의 선언 시작
    int value;      // private 데이터 멤버
public:             // public 멤버 변수
    Counter() : value(0) {}   //생성자 - 교재에는 value{ 0 } {} 표기되어 있지만 에러남
    // Counter()       // 생성자
    //     { value = 0; }
    void reset()            // 계수기의 값을 0으로 지움
        { value = 0; }
    void count()            // 계수기의 값을 1 증가시킴
        { ++value; }
    int getValue() const    // 계수기의 현재 값을 반환함
        { return value; }
};

#endif  // COUNTER_H_INCLUDED