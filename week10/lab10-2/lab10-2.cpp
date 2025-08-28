#include <iostream>
using namespace std;

class Time
{
	
private:
	// 여기에 시각 관련 멤버 변수 선언
	int time, minute, second;
public:
	// 여기에 시각 설정 함수와 출력 함수 선언
	int setTime(int t, int m, int s);
	int setTime(int t, int m);
	int setTime(int t);
	void print();

};

// 여기에 각 멤버 함수 정의
int Time::setTime(int t, int m, int s){
	time = t;
	minute = m;
	second = s;
  return 0;
}
int Time::setTime(int t, int m){
	time = t;
	minute = m;
	second = 0;
  return 0;
}
int Time::setTime(int t){
	time = t;
	minute = 0;
	second = 0;
  return 0;
}
void Time::print(){
	cout << time << " : " << minute << " : " << second << endl;
}

int main() {
	Time t1;
	t1.setTime(7, 10, 20);
	t1.print();
	t1.setTime(8, 20);
	t1.print();
	t1.setTime(9);
	t1.print();

	return 0;
};
