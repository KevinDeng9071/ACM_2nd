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

/*���õ���string��string����Լ��ַ����Ĳ�������������ͨ��ֵ����һ����ӡ�
 *
 *getline������ȡһ������
 *
 *stringstream��ͷ�ļ�sstream�У�
 *
 *stringstream ss(line);������һ���ַ�����-----ss,������������cinһ����ȡss��
 */
