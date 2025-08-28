#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	srand((unsigned)time(NULL));
	string org = "apple";	// 원본 단어
	string s;				// 글자가 뒤섞인 단어
	string ans;				// 입력한 단어

	s = org;

	// 문자열 안의 글자들을 섞는다.(글자의 수만큼)
	// 즉, 글자 수 범위 내의 난수 2개를 생성해서
	// 두 난수 위치의 글자를 교환(swap)한다.
	//for(int i=0; i<1; i++){
		int a = rand() %org.length();
		int b = rand() %org.length();
		swap(s[a],s[b]);
	//}


	do {
		cout << s << "은 어떤 단어가 스크램블된 것일까요? ";
		cin >> ans;
	} while (ans != org);

	cout << "축하합니다." << endl;
	return 0;
}

