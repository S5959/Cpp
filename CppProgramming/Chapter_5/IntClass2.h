/**
 * 소스코드 5-2 (p.178)
 * */
class IntClass2 {
    int a;
public:
    IntClass2(int n=0) : a(n) {}    // 생성자
    IntClass2 operator ++ (int) {     // 후위 표기 ++ 연산자 다중정의
        IntClass2 tmp(*this);
        ++a;
        return tmp;
    }
    int getValue() const { return a; }
};