#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SIZE = 12;
    vector<int> Cubic;
    int sum;

    // Cubic 벡터에 주어진 값으로 초기화
    for (int i = 0; i < SIZE; i++) {
        Cubic.push_back(i * i * i);
    }

    // sum 변수를 초기화한 후 Cubic 벡터의 모든 값을 더해서 출력
    // 이를 위해 범위 기반 반복문을 이용할 것.
    sum = 0;
    for (auto a : Cubic){
      sum += a;
    }
    cout << "Sum of all numbers : " << sum << endl;
    return 0;
}
