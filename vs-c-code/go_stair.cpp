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
//vector<long long> dp(1000, 0); // ʹ�� long long ����
//
//long long stair(int n) {
//    if (n <= 0) return 0; // ���� n <= 0 �����
//    if (n == 1) return 1; // ֻ�� 1 �ַ�ʽ
//    if (n == 2) return 2; // ֻ�� 2 �ַ�ʽ
//
//    // ��ʼ���������
//    dp[1] = 1;
//    dp[2] = 2;
//
//    // ��� dp ����
//    for (int i = 3; i <= n; i++) {
//        dp[i] = dp[i - 1] + dp[i - 2];
//    }
//
//    return dp[n]; // ���ص� n ��¥�ݵ��ܷ�����
//}
//
//int main_6() {
//    int num;
//    cin >> num;
//    long long t = stair(num); // ʹ�� long long ����
//    cout << t << endl; // ������
//    return 0;
//}
