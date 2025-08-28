#include <iostream>
using namespace std;

int main(){
  int a,b,c;

  cout << "3개의 정수를 입력하시오 : " << flush;
  cin >> a >> b >> c;

  if (a > b){
    if(a > c){
      cout << "가장 큰 정수는 " << a << endl;
    }
    else{
      cout << "가장 큰 정수는 " << c << endl;
    }
  }
  else if (b > a){
    if (b > c){
      cout << "가장 큰 정수는 " << b << endl;
    }
    else{
      cout << "가장 큰 정수는 " << c << endl;
    }
  }

  return 0;
}