#include <iostream>
#include <vector>
using namespace std;

class Contact {
    string name;
    string tel;
public:
    Contact() : name(""), tel("") { }
    Contact(string n, string t) : name(n), tel(t) { }
    // 필요한 멤버 함수 정의
    string getName(){return name;};
    string getTel(){return tel;};
};

int main() {
    const int SIZE = 3;
    vector <Contact> Friend;
    string name, tel;
    bool found;

    // SIZE 만큼 이름과 전화번호를 사용자로부터 입력받아서,
    for (int i = 0; i < SIZE; i++) {
        cout << "이름을 입력하세요: ";
        cin >> name;
        cout << "전화번호를 입력하세요: ";
        cin >> tel;
        // 입력받은 이름과 전화번호로 Contact 객체를 만들어서 벡터 객체 Friend에 추가
        Friend[i]=Contact(name, tel);
    }

    found = false;
    cout << "탐색하고 싶은 이름을 입력하세요: ";
    cin >> name;

    // 벡터에서 입력받은 이름을 검색해서 찾으면,
    // found를 true로 설정하고 전화번호 출력
    for (int i=0; i<SIZE; i++){
        if(name == Friend[i].getName()){
            found = true;
            cout << "전화번호 : " << Friend[i].getTel() << endl;
        }     
    }

    if (!found)
        cout << "<해당 이름을 찾지 못함>" << endl;
    return 0;
}
