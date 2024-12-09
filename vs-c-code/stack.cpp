//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//vector<int>dp(999,0);
//
//int catalan(int n) {
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 2;
//	for (int i = 3; i < n+1; i++) {
//		for (int j = 0; j <= i - 1; j++) {
//			dp[i] += dp[j] * dp[i - 1 - j];
//		}
//	}
//	return dp[n];
//}
//
//int main_7() {
//	int num;
//	cin >> num;
//	int n = catalan(num);
//	printf("%d", n);
//	return 0;
//}