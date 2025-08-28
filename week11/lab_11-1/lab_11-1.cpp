#include <iostream>
using namespace std;

// Cube class의 선언만 있음 (정의는 아래에 없음!!)

class Cube {
private:
    double length;
    double getSurfArea();
    double getVolume();
public:
    Cube();
    Cube(double);
    void print();
};

// 매개변수 없는 생성자 정의
// 매개변수 있는 생성자 정의
Cube::Cube(){
    length = 1.0;
}
Cube::Cube(double a){
    length = a;
}

// 표면적을 계산하여 반환하는 멤버 함수 getSurfArea
// 정육면체의 표면적 = 6 * 변 * 변
double Cube::getSurfArea(){
    return 6 * length * length;
}

// 부피를 계산하여 반환하는 멤버 함수 getVolume
// 정육면체의 부피 = 변 * 변 * 변
double Cube::getVolume(){
    return length * length * length;
}

// print 함수: 표면적과 부피를 출력
void Cube::print(){
    cout << "표면적 : " << getSurfArea() << ", " << "부피 : " << getVolume() << endl;
}

// main() 함수 정의부
int main() {
    Cube c1, c2(2.3);
    c1.print();
    c2.print();
    return 0;	
}