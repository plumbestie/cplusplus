#include <iostream>
using namespace std;

int main(){
  int money;
  int candy;

  cout << "현재 가지고 있는 돈 : " << flush; 
  // flush를 안 써도 논리적 오류는 없지만 코드를 실행하자마자 
  // 입력문을 띄우고 싶다면 쓰는 것이 안전하다.
  cin >> money;

  cout << "캔디의 가격 : " << flush;
  cin >> candy;

  cout << "최대로 살 수 있는 캔디의 개수 = " << money/candy << endl;
  cout << "캔디 구입 후 남은 돈 = " << money%candy << endl;
  return 0;
}
