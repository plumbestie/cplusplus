#include<iostream>
using namespace std;

int main()
{
    int n, f1 = 0, f2 = 1, f3 = 0;

    cout << "몇 항까지 출력할까요?: ";
    cin >> n;

    // 반복문을 이용해서 피보나치 수열 출력
    while (f3 < n) {        
        f3++;
        cout << f1 << " ";
        f2 = f1 + f2;
        f1 = f2 - f1;
    }
    

    return 0;
}
