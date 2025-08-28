#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 8;
	int inumbers[SIZE] = { 1, 2, 4, 5, 10, 100, 2, -22 };

	// 필요한 변수들을 초기화
	// 배열에서 최솟값과 최댓값 찾기
	// 최솟값과 최댓값 출력하기
	int max = inumbers[0];
	for (auto& elem: inumbers){
		if (elem > max) max = elem;
	}
	cout << "최대값=" << max << endl;

	int min = inumbers[0];
	for (auto& elem: inumbers){
		if (elem < min) min = elem;
	}
	cout << "최소값=" << min << endl;


	return 0;
}
