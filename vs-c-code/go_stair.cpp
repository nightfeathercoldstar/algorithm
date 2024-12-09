////#include<iostream>
////#include<cmath>
////#include<cstdio>
////#include<string>
////#include<vector>
////
////using namespace std;
////
////vector<int>dp(999, 0);
////
////int stair(int n) {
////	if (dp[n - 1] == 0 || dp[n - 2] == 0) {
////		for (int i = 3; i <= n; i++) {
////			dp[i] = dp[i - 1] + dp[i - 2];
////		}
////	}
////	return dp[n - 1] + dp[n - 2];
////}
////
////int main() {
////	int num;
////	dp[1] = 1;
////	dp[2] = 2;
////	cin >> num;
////	int t = stair(num);
////	printf("%d", t);
////	return 0;
////}
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<long long> dp(1000, 0); // 使用 long long 类型
//
//long long stair(int n) {
//    if (n <= 0) return 0; // 处理 n <= 0 的情况
//    if (n == 1) return 1; // 只有 1 种方式
//    if (n == 2) return 2; // 只有 2 种方式
//
//    // 初始化基本情况
//    dp[1] = 1;
//    dp[2] = 2;
//
//    // 填充 dp 数组
//    for (int i = 3; i <= n; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    return dp[n]; // 返回第 n 个楼梯的总方法数
//}
//
//int main_6() {
//    int num;
//    cin >> num;
//    long long t = stair(num); // 使用 long long 类型
//    cout << t << endl; // 输出结果
//    return 0;
//}
