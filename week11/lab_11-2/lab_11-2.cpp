#include <iostream>
using namespace std;

class BankAccount {
    double balance, rate;
public:    
    BankAccount():balance{0}, rate{5} {}                     // 잔액과 이자율 멤버 변수를 모두 0으로 초기화
    BankAccount(double b, double r):balance{b}, rate{r} {}   // 잔액과 이자율 멤버 변수를 인자로 초기화

    void deposit(double d) {
        // 입금 금액 처리 함수 정의
        // 입금 금액만큼 증가
        balance += d;                
    }
    
    void withdraw(double w) {               
        // 출금 금액 처리 함수 정의
        // 출금 금액만큼 감소
        balance -= w;   
    }
    void display() {
        // 계좌 정보 출력 함수 정의
        // 잔액과 이자율 출력
        cout << "잔고 : " << balance << ", " << "이자율 : " << rate << endl;
    }
};

int main() {
    BankAccount b1, b2(250000, 5.5);
    b1.display();
    b1.deposit(50000);
    b1.display();
    b1.withdraw(30000);
    b1.display();

    b2.display();
    b2.withdraw(200000);
    b2.display();
}
