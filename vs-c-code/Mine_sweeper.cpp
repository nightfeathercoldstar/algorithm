//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main_4() {
//    int n, m;
//    cin >> n >> m; // ��������������
//    cin.ignore(); // ���Ի��з�
//
//    vector<vector<char>> minefield(n, vector<char>(m)); // ������������
//    vector<vector<char>> result(n, vector<char>(m)); // �����������
//
//    // ������������
//    for (int i = 0; i < n; ++i) {
//        string line;
//        getline(cin, line); // ʹ�� getline ��ȡÿһ��
//        for (int j = 0; j < m; ++j) {
//            minefield[i][j] = line[j]; // ���ַ�������������
//        }
//    }
//
//    // ������Χ�˸�����
//    int directions[8][2] = {
//        {-1, -1}, {-1, 0}, {-1, 1},
//        {0, -1},          {0, 1},
//        {1, -1}, {1, 0}, {1, 1}
//    };
//
//    // ����ÿ���ǵ��׸���Χ�ĵ�������
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (minefield[i][j] == '*') {
//                result[i][j] = '*'; // ���׸�ֱ�Ӹ�ֵΪ '*'
//            }
//            else {
//                // ͳ����Χ�ĵ�������
//                int count = 0;
//                for (int k = 0; k < 8; ++k) {
//                    int newX = i + directions[k][0];
//                    int newY = j + directions[k][1];
//                    // ȷ������������Ч��Χ��
//                    if (newX >= 0 && newX < n && newY >= 0 && newY < m) {
//                        if (minefield[newX][newY] == '*') {
//                            count++;
//                        }
//                    }
//                }
//                result[i][j] = count + '0'; // �洢��Χ����������ת��Ϊ�ַ���
//            }
//        }
//    }
//
//    // ������
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << result[i][j];
//        }
//        cout << endl; // ����
//    }
//
//    return 0;
//}
