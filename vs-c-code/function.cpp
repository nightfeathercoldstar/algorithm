//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//long long dp[25][25][25];
//
//long long get_it(long long a, long long b, long long c) {
//	if (a <= 0 || b <= 0 || c <= 0)return 1;
//	if (a > 20 || b > 20 || c > 20)return get_it(20, 20, 20);
//	if (a < b && b < c) {
//		if (dp[a][b][c - 1] == 0)dp[a][b][c - 1] = get_it(a, b, c - 1);
//		if (dp[a][b - 1][c - 1] == 0)dp[a][b - 1][c - 1] = get_it(a, b - 1, c - 1);
//		if (dp[a][b-1][c] == 0)dp[a][b-1][c] = get_it(a, b-1, c);
//		dp[a][b][c] = dp[a][b][c - 1] + dp[a][b - 1][c - 1] - dp[a][b-1][c];
//	}
//	else {
//		if (dp[a - 1][b][c] == 0)dp[a - 1][b][c] = get_it(a - 1, b, c);
//		if (dp[a - 1][b - 1][c] == 0)dp[a - 1][b][c] = get_it(a - 1, b - 1, c);
//		if (dp[a - 1][b][c - 1] == 0)dp[a - 1][b][c - 1] = get_it(a - 1, b, c - 1);
//		if (dp[a - 1][b - 1][c - 1] == 0)dp[a - 1][b - 1][c - 1] = get_it(a - 1, b - 1, c - 1);
//		dp[a][b][c] = dp[a - 1][b][c] + dp[a - 1][b][c] + dp[a - 1][b][c - 1] - dp[a - 1][b - 1][c - 1];
//	}
//	return dp[a][b][c];
//}
//
//int main() {
//	long long a, b, c;
//	while (scanf("%lld%lld%lld", &a, &b, &c))//无限输入，直到“-1 -1 -1”
//	{
//		if (a == -1 && b == -1 && c == -1) return 0;//-1 -1 -1就直接结束，不运算了。
//
//		printf("w(%lld, %lld, %lld) = ", a, b, c);
//		printf("%lld\n", get_it(a, b, c));
//	}
//	return 0;
//}