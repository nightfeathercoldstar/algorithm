// #include<iostream>
// #include<cmath>
// #include<cstdio>
// #include<string>
// #include<vector>

// using namespace std;

// vector<int>dp(999, 0);

// int check_line(int n) {
// 	dp[0] = 0;
// 	dp[1] = 1;
// 	dp[2] = 2;
// 	for (int i = 3; i <= n; i++) {
// 		for (int j = i; j>=1; j--) {
// 			if (j == i)j = j / 2;
// 			dp[i] += dp[j];		
// 		}
// 		dp[i]++;
// 	}
// 	return dp[n];
// }

// int main() {
// 	int num;
// 	cin >> num;
// 	int k = check_line(num);
// 	printf("%d", k);
// 	return 0;
// }