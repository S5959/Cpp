/**
 * 소스코드 5-1 (p.177)
 * */
class IntClass1 {
    int a;
public:
    IntClass1(int n=0) : a(n) {}    // 생성자
    IntClass1& operator ++ () {     // 전위 표기 ++ 연산자 다중정의
        ++a;
        return *this;
    }
    int getValue() const { return a; }
};