//#include<iostream>
//#include<cstring>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//char a1[10001], b1[10001];
//int a[10001], b[10001], len_a, len_b,c[10001];
//int main() {
//	cin >> a1 >> b1;
//	len_a = strlen(a1);
//	len_b = strlen(b1);
//	for (int i = 1; i <= len_a; i++) {
//		a[i] = a1[len_a-i] - '0';
//	}
//	for (int i = 1; i <= len_b; i++) {
//		b[i] = b1[len_b-i] - '0';
//	}
//	int lenab = len_a + len_b;
//	for (int i = 1; i <= len_a; i++) {
//		for (int j = 1; j <= len_b; j++) {
//			c[i + j - 1] += a[i] * b[j];
//		}
//	}
//	for (int i = 1; i < lenab; i++) {
//		if (c[i] > 9) {
//			c[i + 1] += c[i] / 10;
//			c[i] = c[i] % 10;
//		}
//	}
//	while (c[lenab] == 0 && lenab > 1)lenab--;
//	for (int i = lenab; i >= 1; i--)cout << c[i];
//	return 0;
//}