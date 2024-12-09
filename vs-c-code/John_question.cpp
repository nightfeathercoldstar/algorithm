#include <iostream>
#include <vector>

using namespace std;

vector<int> josephus(int n, int m) {
   vector<int> people(n);
   for (int i = 0; i < n; ++i) {
       people[i] = i + 1;  // ��ʼ��1��n����
   }

   vector<int> result;  // �洢��Ȧ�˵ı��
   int index = 0;  // ��ǰ����������

   while (!people.empty()) {
       index = (index + m - 1) % people.size();  // �����Ȧ���˵�����
       result.push_back(people[index]);  // ����Ȧ���˼�����
       people.erase(people.begin() + index);  // ���б����Ƴ���Ȧ����
   }

   return result;
}

int main() {
   int n, m;
   cin >> n >> m;  // ����n��m
   vector<int> result = josephus(n, m);

   // ������
   for (int i = 0; i < result.size(); ++i) {
       cout << result[i];
       if (i < result.size() - 1) {
           cout << " ";  // ����ո�ָ�
       }
   }
   cout << endl;

   return 0;
}
