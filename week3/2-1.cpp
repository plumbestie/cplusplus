#include <iostream>
using namespace std;

int main(){
  char code;
  char secret = 'h'; //문자형 변수를 배정할 때는 따옴표가 반드시 필요하다.

  cout << "비밀코드를 맞춰보세요 : " << flush;
  cin >> code;

  if (code<secret){
    cout << code << "뒤에 있음" << endl;
  }
  else if (code>secret) {
    cout << code << "앞에 있음" << endl;
  }
  else {
    cout << "정답!" << endl;
  }

  return 0;
}