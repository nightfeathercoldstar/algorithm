//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct Student {
//	int ID;
//	Student* left=NULL;
//	Student* right=NULL;
//};
//
//int main() {
//	int n;
//	cin >> n;
//	vector<Student>p(n);
//	p[0].ID = 1;
//	int num1, num2;
//	Student* temp;
//	for (int i = 1; i < n; i++) {
//		cin >> num1 >> num2;
//		if (num2 == 0) {
//			if (p[num1 - 1].left == NULL) {
//				p[i].ID = i + 1;
//				p[i].right = &p[num1 - 1];
//				p[num1 - 1].left = &p[i];
//			}
//			else {
//				p[i].ID = i + 1;
//				temp = p[num1 - 1].left;
//				temp->right = &p[i];
//				p[i].left = temp;
//				p[i].right = &p[num1 - 1];
//				p[num1 - 1].left = &p[i];
//			}
//		}
//		if (num2 == 1) {
//			
//			if (p[num1 - 1].right == NULL) {
//				p[i].ID = i + 1;
//				p[i].left = &p[num1 - 1];
//				p[num1 - 1].right = &p[i];
//			}
//			else {
//				p[i].ID = i + 1;
//				temp = p[num1 - 1].right;
//				temp->left = &p[i];
//				p[i].right = temp;
//				p[i].left = &p[num1 - 1];
//				p[num1 - 1].right = &p[i];
//			}
//		}
//	}
//	int m;
//	cin >> m;
//	vector<int>del(m);
//	for (int i = 0; i < m; i++) {
//		cin >> del[i];
//		p[del[i] - 1].ID = 0;
//	}
//	temp = &p[0];
//	while (temp->left != NULL) {
//		temp = temp->left;
//	}
//	while (temp->right != NULL) {
//		if (temp->ID == 0)temp = temp->right;
//		else {
//			printf("%d ", temp->ID);
//			temp = temp->right;
//		}
//	}
//	if (temp->ID != 0) {
//		printf("%d", temp->ID);
//	}
//	return 0;
//}