#include "dice.h"

int main()
{
	Dice D1;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		D1.roll();
		cout << "주사위의 눈은 " << D1.getFace() << "입니다." << endl;
		
	}
	return 0;
}
