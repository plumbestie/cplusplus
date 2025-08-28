#include <iostream>
using namespace std;

class Complex {
    double real, imaginary;   // real(실수부) & imaginary(허수부)
public:
    Complex() : real{0}, imaginary{0} {
        // 매개변수 없는 생성자 (모두 0으로 초기화)
    }
    Complex(double r, double i) : real{r}, imaginary{i} {
        // 두 개의 매개변수를 받는 생성자 (모두 인자로 초기화) 
    }
    void print() {
        // Complex 수 출력
        cout << "(" << real << "," << imaginary << ")" << endl;
    }
    // 필요한 setter 함수가 있다면 추가해도 됨
    double getReal(){return real;}
    double getImaginary(){return imaginary;}
    void setReal(double r){
        real = r;
    }
    void setImaginary(double i){
        imaginary = i;
    }
};

Complex add(Complex a, Complex b) {
    // 두 Complex 객체를 더하는 일반 함수 정의
    // 두 복소수의 실수를 더하고 허수도 더해서 새로운 복소수 생성 
    double real = a.getReal() + b.getReal();
    double imaginary = a.getImaginary() + b.getImaginary();
    Complex c (real, imaginary);
    return c;
}

int main() {
    Complex c1(1.2, 3.4), c2, c3;
    c2.setReal(5.6);
    c2.setImaginary(7.8);
    c3 = add(c1, c2);
    c1.print();
    c2.print();
    c3.print();
}
