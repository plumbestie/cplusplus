#include <iostream>
using namespace std;

int maximum(int x, int y, int z) {
	// 매개변수 중 최대값 찾기
	// 찾은 최대값 반환하기
  int maximum;
  if (x>y && x>z){
    maximum = x;
  }
  else if (y>x && y>z){
    maximum = y;
  }
  else {
    maximum = z;
  }

  return maximum;
}

int main(void) //(void)는 매개변수가 없음을 명시적으로 표시해둔 것
{
	int x, y, z, max;
	cout << "3개의 정수를 입력하시오 :";
	cin >> x >> y >> z;

	// 함수호출(매개변수 전달) 및 반환값 저장하기
  max = maximum(x,y,z);

	cout << "가장 큰 정수는 " << max << endl;
}
