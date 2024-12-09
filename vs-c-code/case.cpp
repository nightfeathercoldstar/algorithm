//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main() {
//	vector<vector<int>>ca(10, vector<int>(2));
//	int m, n;
//	cin >> m >> n;
//	vector<vector<vector<int>>>k(m, ca);
//	int num;
//	int num1, num2, num3;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		if (num == 1) {
//			cin >> num1 >> num2 >> num3;
//			if (num3 == 0) {
//				for (int j = 0; j < 10; j++) {
//					if (k[num1 - 1][j][0] == num2) {
//						k[num1 - 1][j][1] = 0;
//						break;
//					}
//				}
//				break;
//			}
//			for (int j = 0; j < 10; j++) {
//				if (k[num1 - 1][j][0] == 0) {
//					k[num1 - 1][j][0] = num2;
//					k[num1 - 1][j][1] = num3;
//					break;
//				}
//			}
//		}
//		if (num == 2) {
//			cin >> num1 >> num2;
//			for (int j = 0; j < 10; j++) {
//				if (k[num1 - 1][j][0] == num2) {
//					printf("%d\n", k[num1 - 1][j][1]);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include <unordered_map>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int n, q;
//    cin >> n >> q;
//
//    // 使用一个unordered_map来存储每个柜子的格子内容
//    unordered_map<int, unordered_map<int, long long>> lockers;
//
//    // 存储查询结果
//    vector<long long> results;
//
//    for (int i = 0; i < q; ++i) {
//        int op;
//        cin >> op;
//
//        if (op == 1) {  // 存储物品
//            int locker_id, box_id;
//            long long item;
//            cin >> locker_id >> box_id >> item;
//            lockers[locker_id][box_id] = item;  // 存入物品
//        }
//        else if (op == 2) {  // 查询物品
//            int locker_id, box_id;
//            cin >> locker_id >> box_id;
//            results.push_back(lockers[locker_id][box_id]);  // 查询物品
//        }
//    }
//
//    // 输出查询结果
//    for (const auto& result : results) {
//        cout << result << endl;
//    }
//
//    return 0;
//}
