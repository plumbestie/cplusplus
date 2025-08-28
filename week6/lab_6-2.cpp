#include <iostream>
#include <cmath> 
using namespace std;

// 여기에 함수의 원형 선언하기
void quad_eqn(int a, int b, int c);

int main()
{
	int a = 0, b = 0, c = 0;   // 근의 공식을 위한 세 계수

	cout<<"2차 방정식의 계수를 입력하시오."<<endl;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;

	// 여기에서 함수 호출하기
  quad_eqn(a,b,c);

	return 0;
}

// 여기에 함수의 헤더 작성하기 
void quad_eqn(int a, int b, int c){
	double result1 = 0,result2 = 0;	
  // 여기에서 2차 방정식의 두 근을 계산하여 result1, result2 구하기
	// 루트 계산을 위한 라이브러리 함수 sqrt사용. sqrt(16)의 결과는 4
  result1 = (-b+(sqrt((b*b-(4*a*c))))) / (2*a);
  result2 = (-b-(sqrt((b*b-(4*a*c))))) / (2*a);
	
	cout << "근은 " << result1 << "와 " << result2 << "입니다." << endl;
}