#include <iostream>
using namespace std;

class Time{
  private :
  int hour, minute, second;

  public :
  void setTime(int h, int m, int s);
  void print();
};

void Time::setTime(int h, int m=0, int s=0){
  hour = h;
  minute = m;
  second = s;
}
void Time::print(){
  cout<< hour << " : " << minute << " : " << second << endl;
}

int main(){
  Time t1;

  t1.setTime(7, 10, 20);
  t1.print();
  t1.setTime(8, 20);
  t1.print();
  t1.setTime(9);
  t1.print();

  return 0;
}