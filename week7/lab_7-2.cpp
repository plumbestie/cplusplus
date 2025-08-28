#include <iostream>
#include <string>
using namespace std;

int wordCount(string);

int main()
{
	string str;

	cout << "영문 문자열을 입력하세요 : ";
	getline(cin, str);
	cout << "영단어의 개수는 : " << wordCount(str) << endl;
}

int wordCount(string st)
{
	// 문자열 st에서 단어의 수를 카운트해서 그 결과를 반환
	int count;
	for (int i=1; i<=st.length(); i++){
		if(st[i] == ' '){
		count += 1;}
	}

	return count;
}