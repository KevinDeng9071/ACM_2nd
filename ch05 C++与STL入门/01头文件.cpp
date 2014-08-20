#include<cstdio>

int main() {
  int a, b;
  while(scanf("%d%d", &a, &b) == 2) printf("%d\n", a+b);
  return 0;
}

/*5 - 1.头文件C++中自己有自己的类库，向下兼容C的库时，都在原C头文件名基础上，

在前缀加字母C，并将后缀.h删掉。如：

stdio.h == cstdio           string.h == cstring

*/