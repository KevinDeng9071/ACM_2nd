/*配有原题PDF版本，下面是题目中文翻译大意
题目大意（书上原文）：现有N个大理石，每个大理石上写了一个非负整数
首先把各个数从小到大排序，然后回答Q个问题。每个问题问是否有一个大理石
写着摸个整数x，如果是，还要回答哪个大理石上写着x、排序后的大理石从左到右编号为1-N

INPUT：
有多个测试用例。总不少于65个。每个测试用例有2整数:
N大理石的数量和Q问题的数量。接下来的N行包含的数字
代表现在对应N上的数字。这些大理石数字不会有任何特定的顺序。
之后Q行是问题。,输入的数字不大于10000的正整数。
输入由一个测试用例终止其中N = 0和Q = 0。

OUTPUT:
为每个测试用例输出案件的标上序列号。每个案例打印一行输出。
这两种不同的格式如下所述:
•“x found at y”,如果第一个大理石与x在位置被发现。职位数量
编号1,2,…,N。
•“x not found”,如果x数量的大理石不存在。

EXAMPLE:
INPUT：
4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0

OUTPUT:
CASE# 1:
5 found at 4
CASE# 2:
2 not found
3 found at 3

解题思路：
题目意思很清楚了，先进行排序，再查找。作者是想介绍alogrithm中的sort和lower_bound函数
sort使用的是快速排序法，速度还不错，使用简单，不用麻烦地写很多实现这个小功能了。
lower_bound作用是查找大于或者等于X的第一个位置，返回地址，具体看代码吧。
*/

// UVa10474 Where is the Marble?
// Rujia Liu
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 10000;

int main() {
  int n, q, x, a[maxn], kase = 0;
  while(scanf("%d%d", &n, &q) == 2 && n) {
    printf("CASE# %d:\n", ++kase);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a+n); // 排序
    while(q--) {
      scanf("%d", &x);
      int p = lower_bound(a, a+n, x) - a; // 在已排序数组a中寻找x
      if(a[p] == x) printf("%d found at %d\n", x, p+1);
      else printf("%d not found\n", x);
    }
  }
  return 0;
}

/*
下面是我自己仿造用C++风格写的0.559秒，我想cin和cout读取花费点时间吧，上面用C才0.125秒。。。。
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int Maxn = 10000;
int a[Maxn];
int main()
{
    int n, q, k = 1;
    while (cin >> n >> q, n)
    {
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << "CASE# " << k++ << ":" << endl;
        sort(a, a + n);
        while (q--)
        {
            int x;
            cin >> x;
            int p = lower_bound(a, a + n, x) - a;
            if (a[p] == x)
                cout << x << " found at " << p + 1 << endl;
            else
                cout << x << " not found" << endl;
        }
    }
    return 0;
}

*/




