#include <iostream>
#include <time.h>
using namespace std;

int main(){
  srand(time(NULL));
  int dice1 = rand() %6 +1;
  int dice2 = rand() %6 +1;

  cout << dice1 << endl;
  cout << dice2 << endl;
  cout << "두 주사위 합 = " << dice1 + dice2 << endl;

  return 0;
}