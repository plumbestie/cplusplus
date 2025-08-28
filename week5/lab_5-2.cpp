#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 10; // 기호상수 선언
	srand((unsigned)time(NULL));
	int answer = rand() % 100;

	// 배열에 10칸에 각각 정수를 랜덤으로 배정 반복문
	int inumbers[SIZE]; // inumbers 배열의 크기는 10
	for (int i = 0; i < SIZE; i++)
		inumbers[i] = rand() % 100;

	cout << "원본 배열: " << endl;
	for (int i = 0; i < SIZE; i++)
		cout << setw(5) << inumbers[i];
	cout << endl;

	// 여기에 배열을 역순으로 정렬하는 코드를 작성하세요.
	// 배열의 인덱스를 두 개 사용해서 배열의 값을 서로 비교하고 교환합니다.
	for (int i = 0; i < 5; i++){
		int j = 9 - i;
		inumbers[i] = inumbers[j] + inumbers[i];
		inumbers[j] = inumbers[i] - inumbers[j];
		inumbers[i] = inumbers[i] - inumbers[j];
	}

	cout << "정렬된 배열: " << endl;
	for (int i = 0; i < SIZE; i++)
		cout << setw(5) << inumbers[i];
	cout << endl;
	return 0;
}
