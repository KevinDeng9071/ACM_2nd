#include<iostream>
#include<algorithm>
using namespace std;

int main() {
  long long a, b;
  while(cin >> a >> b) {
    cout << min(a,b) << "\n";
  }
  return 0;
}

/*5 - 2.使用了命名空间   using namespace std;  具体也没有详说，不过

对ACMer来说似乎不用管这个，只需知道这类似于C中的作用域差不多就行了吧。

5 - 2.有用的头文件iostream。这个提供了输入输出流，包含了cout和cin类对象。

提供基本输入输出，写起来方便，但速度慢。（有解决办法，关闭和stdio的同步，即调用ios::sync_with_stdio(false))

5 - 2.有用的头文件alogrithm,提供了很多有用算法的函数。

5.bool关键字，bool变量，值有true和false代表0和1.
*/
