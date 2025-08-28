#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SIZE = 10;
    char c;
    vector<char> str1(SIZE), str2(SIZE);
    cout << "문자를 입력하세요: ";

    // 키보드로 SIZE 만큼 문자를 입력 받아 str1에 저장
    for (auto&c:str1){
        cin >> c;
        str1.push_back(c);
    }

    cout << "입력된 문자열: ";
    // str1 출력
    for (auto c:str1){
        cout << c;
    }
    cout << endl;

    // str1의 데이터를 역순으로 str2에 저장
    for (auto c : str1){
        str2.push_back(str1.back());
        str1.pop_back();
    }

    cout << "역순 문자열: ";
    // str2 출력
    for(auto c:str2){
        cout << c;
    }
    cout<<endl;

    return 0;
}
