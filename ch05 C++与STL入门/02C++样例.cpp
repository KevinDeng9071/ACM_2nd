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

/*5 - 2.ʹ���������ռ�   using namespace std;  ����Ҳû����˵������

��ACMer��˵�ƺ����ù������ֻ��֪����������C�е�������������˰ɡ�

5 - 2.���õ�ͷ�ļ�iostream������ṩ�������������������cout��cin�����

�ṩ�������������д�������㣬���ٶ��������н���취���رպ�stdio��ͬ����������ios::sync_with_stdio(false))

5 - 2.���õ�ͷ�ļ�alogrithm,�ṩ�˺ܶ������㷨�ĺ�����

5.bool�ؼ��֣�bool������ֵ��true��false����0��1.
*/
