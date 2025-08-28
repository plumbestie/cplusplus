#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
	const int RowSize = 4;
	const int ColSize = 3;
	int x1[RowSize][ColSize], x2[RowSize][ColSize], x3[RowSize][ColSize];
	srand((unsigned)time(NULL));

	int row, col;

	// 아래 중첩 반복문으로 x1 배열을 난수로 초기화
	for (row = 0; row < RowSize; row++)
		for (col = 0; col < ColSize; col++)
			x1[row][col] = rand() % 10;
	
	// 여기에 x2 배열 초기화 코드 작성
	for (row = 0; row < RowSize; row++)
		for(col = 0; col < ColSize; col++)
			x2[row][col] = rand() % 10;

	// 여기에 x3 <- x1 + x2 계산 코드 작성
	for (row = 0; row < RowSize; row++)
		for(col = 0; col < ColSize; col++)
			x3[row][col] = x1[row][col] + x2[row][col];

	// 아래 중첩 반복문으로 x1 배열 출력
	for (row = 0; row < RowSize; row++)
	{
		for (col = 0; col < ColSize; col++)
			cout << setw(5) << x1[row][col];
		cout << endl;
	}
	cout << endl << "         +" << endl << endl;
	
	// 여기에 x2 출력 코드 작성
	for (row = 0; row < RowSize; row++){
		for (col = 0; col < ColSize; col++)
			cout << setw(5) << x2[row][col];
		cout << endl;
	}
	
	cout << endl << "         =" << endl << endl;
	
	// 여기에 x3 출력 코드 작성
	for (row = 0; row < RowSize; row++){
		for (col = 0; col < ColSize; col++)
		cout << setw(5) << x3[row][col];
	cout << endl;
	}

	return 0;
}
