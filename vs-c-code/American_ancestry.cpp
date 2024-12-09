//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//struct node {
//	int key;
//	node* left;
//	node* right;
//	int height;
//};//树的节点
//
////获取节点高度
//int height(node* n) {
//	if (n == nullptr)return 0;
//	return n->height;
//}
//
////获取平衡因子
//int getbalance(node* n) {
//	if (n == nullptr)return 0;
//	return height(n->left) - height(n->right);
//}
//
////创建树的节点
//node* Newnode(int key) {
//	node* n = new node();
//	n->key = key;
//	n->left = nullptr;
//	n->right = nullptr;
//	n->height = 1;
//	return n;
//}
//
////左旋转
//node* leftRonate(node* y) {
//	node* x = y->right;
//	node* temp = x->left;
//
//	x->left = y;
//	y->right = temp;
//
//	x->height = max(height(x->left), height(x->right)) + 1;
//	y->height = max(height(y->left), height(y->right)) + 1;
//
//	return x;
//}
//
////右旋转
//node* rightRonate(node* y) {
//	node* x = y->left;
//	node* temp = x->right;
//
//	x->right = y;
//	y->left = temp;
//
//	x->height = max(height(x->left), height(x->right)) + 1;
//	y->height = max(height(y->left), height(y->right)) + 1;
//
//	return x;
//}
//
//node* insert(node* n, int key) {
//	if (n == nullptr)return Newnode(key);
//	if (key < n->key)n->left = insert(n->left, key);
//	else if (key > n->key)n->right = insert(n->right, key);
//	else return n;
//
//	n->height = 1 + max(height(n->left), height(n->right));
//
//	int balance = getbalance(n);
//
//	if (balance > 1 && key < n->left->key) {
//		return rightRonate(n);
//	}
//
//	if (balance<-1 && key>n->right->key) {
//		return leftRonate(n);
//	}
//
//	if (balance > 1 && key > n->left->key) {
//		n->left = leftRonate(n->left);
//		return rightRonate(n);
//	}
//
//	if (balance < -1 && key < n->right->key) {
//		n->right = rightRonate(n->right);
//		return leftRonate(n);
//	}
//	return n;
//}
//
////中序遍历
//void inorder(node* root) {
//	if (root != nullptr) {
//		inorder(root->left);
//		cout << root->key << " ";
//		inorder(root->right);
//	}
//}
//
//
//
//int main() {
//	node* root = nullptr;
//
//	// 插入节点
//	root = insert(root, 10);
//	root = insert(root, 20);
//	root = insert(root, 30);
//	root = insert(root, 40);
//	root = insert(root, 50);
//	root = insert(root, 25);
//
//	// 中序遍历
//	cout << "中序遍历结果: ";
//	inorder(root);
//
//	return 0;
//}