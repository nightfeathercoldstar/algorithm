//#include<iostream>
//#include<cmath>
//#include<cstdio>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main_5() {
//	long m, n;
//	cin >> m >> n;
//	struct People {
//		string name;
//		int direction;
//		People* left = NULL;
//		People* right = NULL;
//	};
//	People* stu = new People[m];
//	for (long i = 0; i < m; i++) {
//		cin >> stu[i].direction >> stu[i].name;
//	}
//	for (long i = 0; i < m; i++) {
//		if (stu[i].direction == 0) {
//			if (i == 0) {
//				stu[i].left = &stu[m - 1];
//				stu[i].right = &stu[1];
//			}
//			else if (i == m - 1) {
//				stu[i].left = &stu[m - 2];
//				stu[i].right = &stu[0];
//			}
//			else {
//				stu[i].left = &stu[i - 1];
//				stu[i].right = &stu[i + 1];
//			}
//		}
//		if (stu[i].direction == 1) {
//			if (i == 0) {
//				stu[i].left = &stu[1];
//				stu[i].right = &stu[m - 1];
//			}
//			else if (i == m - 1) {
//				stu[i].left = &stu[0];
//				stu[i].right = &stu[m - 2];
//			}
//			else {
//				stu[i].left = &stu[i + 1];
//				stu[i].right = &stu[i - 1];
//			}
//		}
//	}
//	vector<vector<long>>order(n, vector<long>(2));
//	for (long i = 0; i < n; i++) {
//		cin >> order[i][0] >> order[i][1];
//	}
//	People* choose = &stu[0];
//	int get;
//	for(long i=0;i<n;i++){
//		get = choose->direction;
//		int steps = order[i][1] % m;
//		if (order[i][0] == 0) {
//			for (long j = 0; j < steps; j++) {
//				if (choose->direction == get)
//					choose = choose->left;
//				else choose = choose->right;
//			}
//		}
//		if (order[i][0] == 1) {
//			for (long j = 0; j < steps; j++) {
//				if (choose->direction == get)
//					choose = choose->right;
//				else choose = choose->left;
//			}
//		}
//	}
//	string str = choose->name;
//	printf("%s", str.c_str());
//	return 0;
//}
////using namespace std;
////struct node
////{
////	int head;
////	string name;
////}a[100005];
////int n, m, x, y;
////int main()
////{
////	cin >> n >> m;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a[i].head >> a[i].name;
////	}
////	int now = 0;
////	for (int i = 1; i <= m; i++)
////	{
////		cin >> x >> y;
////		if (a[now].head == 0 && x == 0)now = (now + n - y) % n;
////		else if (a[now].head == 0 && x == 1)now = (now + y) % n;
////		else if (a[now].head == 1 && x == 0)now = (now + y) % n;
////		else if (a[now].head == 1 && x == 1)now = (now + n - y) % n;
////	}
////	cout << a[now].name << endl;
////	return 0;
////}
////很简洁的算法，通过使用