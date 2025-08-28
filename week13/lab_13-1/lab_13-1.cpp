#include <iostream>
#include <iomanip>
using namespace std;

// Point 클래스 선언과 정의문서
// 멤버 함수 정의하는 클래스 내부에서 선언함
class Point
{
private:
  double x;
  double y;
 
public:
  Point();
  Point(double, double);
  double getX();
  double getY();
  void setX(double);
  void setY(double);
  void display();
};

// 여기에 생성자 및 멤버함수 정의를 작성
Point::Point() : x{0}, y{0} {}
Point::Point(double x, double y) : x{x}, y{y} {}

double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

void Point::display()
{
  cout << "(" << x << ", " << y << ")" << endl;
}

int main()
{
  const int SIZE = 10;
  Point PointArr1[SIZE], PointArr2[SIZE];

  // PointArr1 배열의 좌표 초기화
  for(int i = 0; i<SIZE; i++){
    PointArr1[i].setX(i);
    PointArr1[i].setY(i);
  }

  // PointArr1의 원소배열을 복사해서 PointArr2 저장
  for(int i = 0; i<SIZE; i++){
    PointArr2[i].setX(PointArr1[9-i].getX());
    PointArr2[i].setY(PointArr1[9-i].getY());
  }

  // PointArr1 출력
  for (Point &arr1 : PointArr1)
  {
    arr1.display();
  }

  cout << "######" << endl;

  // PointArr2 출력
  for (Point &arr2 : PointArr2)
  {
    arr2.display();
  }

  return 0;
}
