//#include<iostream>
//#include<cstdio>
//#include<cmath>
//
//using namespace std;
////7
////2 - 4 3 - 1 2 - 4 3
//
//int main_2() {
//	int num;
//	cin >> num;
//	int* line = new int[num];
//	for (int i = 0; i < num; i++) {
//		cin >> line[i];
//	}
//	int** calcu = new int* [num - 1];
//	for (int i = 1; i < num; i++) {
//		calcu[i-1] = new int[num - i];
//	}
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - i - 1; j++) {
//			calcu[i][j] = 0;
//		}
//	}
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - i - 1; j++) {
//			for (int k = j; k <= j + i + 1; k++) {
//				calcu[i][j] += line[k];
//			}
//		}
//	}
//	int temp = calcu[0][0];
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - i - 1; j++) {
//			if (calcu[i][j] > temp)temp = calcu[i][j];
//		}
//	}
//	printf("%d", temp);
//	return 0;
//}