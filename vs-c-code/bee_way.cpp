// //#include<iostream>
// //#include<vector>
// //#include<string>
// //
// //using namespace std;
// //
// //long long get_way(vector<vector<long long>>dp, int m, int n) {
// //	dp[m-1][1] = 1;
// //	dp[m][1] = 1;
// //	dp[m+1][1] = 2;
// //	if (dp[n - 1][1] != 0)return dp[n - 1][1];
// //	else {
// //		for (int i = m + 2; i <= n - 1; i++) {
// //			dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
// //		}
// //		return dp[n - 1][1];
// //	}
// //}
// //
// //int main() {
// //	int m,n;
// //	cin >> m >> n;
// //	vector<vector<long long>>dp(n,vector<long long>(2,0));
// //	/*for (int i = 0; i <= n - 1; i++) {
// //		dp[i][0] = i + 1;
// //	}	*/
// //	long long num = get_way(dp, m, n);
// //	printf("%lld", num);
// //	return 0;
// //}
// #include <cstdio>
// using namespace std;

// int n, m, len = 1;
// int f[1005][1005];

// int plus(int x); // 前向声明

// int plus(int x) {
//    for (int i = 1; i <= len; i++)
//        f[x][i] = f[x - 1][i] + f[x - 2][i];
//    for (int i = 1; i <= len; i++)
//        if (f[x][i] > 9) {
//            f[x][i + 1] += f[x][i] / 10;
//            f[x][i] %= 10;
//        }
//    if (f[x][len + 1]) len++;
//    return 0;
// }

// int main() {
//    scanf("%d%d", &m, &n);
//    f[1][1] = 1;
//    f[2][1] = 2;
//    for (int i = 3; i <= n - m; i++)
//        plus(i); // 不需要 int k=，因为 plus 函数返回值没有被使用
//    for (int i = len; i; i--)
//        printf("%d", f[n - m][i]);
//    return 0;
// }
