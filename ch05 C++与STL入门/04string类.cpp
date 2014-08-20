#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
  string line;
  while(getline(cin, line)) {
    int sum = 0, x;
    stringstream ss(line);
    while(ss >> x) sum += x;
    cout << sum << "\n";
  }
  return 0;
}

/*有用的类string。string类可以简化字符串的操作，比如像普通数值变量一样相加。
 *
 *getline函数读取一行数据
 *
 *stringstream在头文件sstream中，
 *
 *stringstream ss(line);将创建一个字符串流-----ss,接下来可以像cin一样读取ss。
 */
