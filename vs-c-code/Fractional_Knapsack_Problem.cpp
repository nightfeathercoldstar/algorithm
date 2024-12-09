//#include<iostream>
//#include<cmath>
//#include<cstdio>
//
//using namespace std;
//double calcu(int N, int T, double* value[],double* num[]) {
//	double weight=0;
//	double money=0;
//	for (int i = 0; i < N; i++) {
//		if ((weight + num[(int)value[i][1]-1][0]) > T && weight < T) {
//			money += (T - weight) * value[i][0];
//			break;
//		}
//		else {
//			money += num[(int)value[i][1] - 1][1];
//			weight += num[(int)value[i][1] - 1][0];
//		}
//	}
//	return money;
//}
//int main_1() {
//	int N, T;
//	cin >> N >> T;
//	double** num = new double* [N];
//	for (int i = 0; i < N; i++) {
//		num[i] = new double[2];
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> num[i][0] >> num[i][1];
//	}
//	//≤‚ ‘
//	//printf("%d", num[2][1]);
//	double** value = new double* [N];
//	for (int i = 0; i < N; i++) {
//		value[i] = new double[2];
//	}
//	for (int i = 0; i < N; i++) {
//		value[i][0] = static_cast<double>(num[i][1]) / num[i][0];
//		value[i][1] = i + 1;
//	}
//	double temp;
//	for (int i = 0; i < N; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if (value[j][0] > value[i][0]) {
//				temp = value[i][0];
//				value[i][0] = value[j][0];
//				value[j][0] = temp;
//				temp = value[i][1];
//				value[i][1] = value[j][1];
//				value[j][1] = temp;
//			}
//		}
//	}
//	//≤‚ ‘
//	/*for (int i = 0; i < N; i++) {
//		printf("%d ", value[i][1]);
//	}*/
//	double end =calcu(N, T, value, num);
//	printf("%.2f", end);
//	return 0;
//}
//
////5 100
////12 131
////80 111
////90 121
////44 303
////50 131