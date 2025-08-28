#include <iostream>
#include <string>
using namespace std;

// 여기에 Book 클래스 정의
// Book 클래스의 멤버 변수는 제목과 저자
class Book {
  public:
    string name;
    string author;
};

int main() 
{
	// Book 객체 생성
	// 생성된 객체에 제목과 저자 설정(대입) 
  Book obj;
  obj.name = "Great C++";
  obj.author = "Bob"; 
	
	cout << "책 이름: " << obj.name << endl;
	cout << "책 저자: " << obj.author << endl;
	return 0;
}