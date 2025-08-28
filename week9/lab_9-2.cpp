#include <iostream>
#include <ctime>

using namespace std;

class Dice
{
private:
	int face;  // 주사위의 현재 면을 나타내는 멤버 변수
public:
	void roll()
	{
		// 주사위를 굴리는 멤버 함수
		// rand() 함수를 이용해서 주사위 면(1~6) 결정 
    face = rand()%6+1;
	}
	int getFace()
	{
		// 주사위 면을 반환하는 멤버 함수
    return face;
	}
};

int main()
{
	// 여기에 Dice 객체 생성
  Dice obj;
	srand(time(NULL));
	for (int i=0; i<10; i++){
    obj.roll();
    cout << "주사위의 숫자는" << obj.getFace() << "입니다." << endl;
  }
  return 0;
}
