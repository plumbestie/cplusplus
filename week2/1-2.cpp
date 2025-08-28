#include <iostream>
using namespace std;

int main(){
  double c,f;
  f = 60;
  c = (5.0/9.0)*(f - 32); 
  // 결과가 소수로 나와야 하기 때문에 
  // 정수 간 나누기로 하면 안 된다. 이에 따라 소수점을 붙였다.

  cout << "화씨온도" << f << "도는 섭씨온도 " << c << "입니다" << endl;
  
  return 0;
}