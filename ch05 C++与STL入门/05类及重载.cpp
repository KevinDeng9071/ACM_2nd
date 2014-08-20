#include<iostream>
using namespace std;

struct Point {
  int x, y;
//  Point(int x=0, int y=0):x(x),y(y) {}
  Point(int x=0, int y=0) { this->x = x; this->y = y; }
};

//  在此创立了结构体Point，里面添加了两种不同的构造函数（有默认参数，也相当于创建了默构函数）
//  x(x),y(y)相当于初始化参数x,y
//  this代表当前使用对象的指针（有关这个建议还是自己看C++语法书了解好。。。）
//  个人不是很喜欢这样的写法。。。

Point operator + (const Point& A, const Point& B) {
  return Point(A.x+B.x, A.y+B.y);
}

// 重载+号，这里是调用构造函数实现的。

ostream& operator << (ostream &out, const Point& p) {
  out << "(" << p.x << "," << p.y << ")";
  return out;
}

// 重载<<号，就可以直接用 cout << 输出了。

int main() {
  Point a, b(1,2);//创建Point对象a,b（C++中还是叫类对象合适些），a使用默认参数，b用1，2初始化x,y
  a.x = 3;//给a对象的x赋值3
  cout << a+b << "\n";//输出对象a+b，格式参见重载的<<中格式。
  return 0;
}



