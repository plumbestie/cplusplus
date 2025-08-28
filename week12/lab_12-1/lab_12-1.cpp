#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
	string title;
	string director;
	double rating;

public:	
  //  생성자 오버로딩
  // 접근자 설정자 및 필요한 멤버 함수들
  Movie() : title{"제목없음"}, director{"감독미정"}, rating{0} {}

  Movie(string t, string d, double r) : title{t}, director{d}, rating{r} {}

  void setTitle(string t){ title = t; }
  void setDirector(string d){ director = d; }
  void setRating(double r){ rating = r; }

  void display(){
    cout << title << " : " << director << " : " << rating << endl;
  }
};

int main() {
    Movie m1;
    m1.setTitle("The Matrix");
    m1.setDirector("The Wachowskis");
    m1.setRating(9.9);
    m1.display();

    Movie m2("The Lord of the Rings", "Peter Jackson", 9.9);
    m2.display();

   return 0;
}