//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct node {
//	int left;
//	int right;
//};
//
//node tree[100010];
//
//int n, ans;
//
//void get_depth(int id, int deep) {
//	if (id == 0)return;
//	ans = max(ans, deep);
//	get_depth(tree[id].left, deep + 1);
//	get_depth(tree[id].right, deep + 1);
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> tree[i].left >> tree[i].right;
//	}
//	get_depth(1, 1);
//	cout << ans << endl;
//	return 0;
//}