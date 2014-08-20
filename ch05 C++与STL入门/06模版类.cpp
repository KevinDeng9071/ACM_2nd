#include<iostream>
using namespace std;


//此段告知读者，模版的基本写法template代表申明模版，typename(也可用class)声明变量，
//之后就可以用T（T是常用写法，其实可以任意用个字符串）代表任意一种变量类型
template <typename T>
struct Point {
  T x, y;
  Point(T x=0, T y=0):x(x),y(y) {}
};

template <typename T>
Point<T> operator + (const Point<T>& A, const Point<T>& B) {
  return Point<T>(A.x+B.x, A.y+B.y);
}

template <typename T>
ostream& operator << (ostream &out, const Point<T>& p) {
  out << "(" << p.x << "," << p.y << ")";
  return out;
}

int main() {
  Point<int> a(1,2), b(3,4);
  Point<double> c(1.1,2.2), d(3.3,4.4);
  cout << a+b << " " << c+d << "\n";
  return 0;
}
