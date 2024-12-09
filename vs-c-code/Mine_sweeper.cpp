//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main_4() {
//    int n, m;
//    cin >> n >> m; // 输入行数和列数
//    cin.ignore(); // 忽略换行符
//
//    vector<vector<char>> minefield(n, vector<char>(m)); // 创建雷区数组
//    vector<vector<char>> result(n, vector<char>(m)); // 创建结果数组
//
//    // 输入雷区数据
//    for (int i = 0; i < n; ++i) {
//        string line;
//        getline(cin, line); // 使用 getline 读取每一行
//        for (int j = 0; j < m; ++j) {
//            minefield[i][j] = line[j]; // 将字符存入雷区数组
//        }
//    }
//
//    // 定义周围八个方向
//    int directions[8][2] = {
//        {-1, -1}, {-1, 0}, {-1, 1},
//        {0, -1},          {0, 1},
//        {1, -1}, {1, 0}, {1, 1}
//    };
//
//    // 计算每个非地雷格周围的地雷数量
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (minefield[i][j] == '*') {
//                result[i][j] = '*'; // 地雷格直接赋值为 '*'
//            }
//            else {
//                // 统计周围的地雷数量
//                int count = 0;
//                for (int k = 0; k < 8; ++k) {
//                    int newX = i + directions[k][0];
//                    int newY = j + directions[k][1];
//                    // 确保新坐标在有效范围内
//                    if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
//                        if (minefield[newX][newY] == '*') {
//                            count++;
//                        }
//                    }
//                }
//                result[i][j] = count + '0'; // 存储周围地雷数量（转换为字符）
//            }
//        }
//    }
//
//    // 输出结果
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << result[i][j];
//        }
//        cout << endl; // 换行
//    }
//
//    return 0;
//}
