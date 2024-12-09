#include <iostream>
#include <vector>

using namespace std;

vector<int> josephus(int n, int m) {
   vector<int> people(n);
   for (int i = 0; i < n; ++i) {
       people[i] = i + 1;  // 初始化1到n的人
   }

   vector<int> result;  // 存储出圈人的编号
   int index = 0;  // 当前报数的索引

   while (!people.empty()) {
       index = (index + m - 1) % people.size();  // 计算出圈的人的索引
       result.push_back(people[index]);  // 将出圈的人加入结果
       people.erase(people.begin() + index);  // 从列表中移除出圈的人
   }

   return result;
}

int main() {
   int n, m;
   cin >> n >> m;  // 输入n和m
   vector<int> result = josephus(n, m);

   // 输出结果
   for (int i = 0; i < result.size(); ++i) {
       cout << result[i];
       if (i < result.size() - 1) {
           cout << " ";  // 输出空格分隔
       }
   }
   cout << endl;

   return 0;
}
