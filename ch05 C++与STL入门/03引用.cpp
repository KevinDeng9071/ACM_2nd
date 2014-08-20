#include<iostream>
using namespace std;

struct Point {
  int x, y;
  Point(int x=0, int y=0):x(x),y(y) {}
};

int main() {
  Point p1, p2;
  swap(p1, p2);
  return 0;
}

//相比指针更好用的引用。声明变量是在之前加个& 可以创建应用变量，很大程度上和指针作用差不多。
