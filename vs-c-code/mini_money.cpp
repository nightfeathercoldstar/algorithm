//#include<iostream>
//#include<vector>
//#include<cmath>
//
//using namespace std;
//
//long long min_get(int m, long long* day) {
//	if (m == 0)return abs(day[0]);
//	long long result = abs(day[m] - day[0]);
//	for (int i = 0; i < m; i++) {
//		if (abs(day[i] - day[m]) < result)result = abs(day[i] - day[m]);
//		/*if (result == 0)return result;*/
//	}
//	return result;
//}
//
//int main() {
//	long long day[32767] = { 0 };
//	int num;
//	cin >> num;
//	for (int i = 0; i < num; i++) {
//		cin >> day[i];
//	}
//	long long sum = 0;
//	for (int i = 0; i < num; i++) {
//		long long p = min_get(i, day);
//		sum += p;
//	}
//	printf("%lld", sum);
//	return 0;
//}
////#include <iostream>
////#include <vector>
////#include <cstdlib> // for abs
////using namespace std;
////
////int main() {
////    int n;
////    cin >> n; // ��ȡ����
////    vector<int> revenues(n);
////
////    // ��ȡÿһ���Ӫҵ��
////    for (int i = 0; i < n; ++i) {
////        cin >> revenues[i];
////    }
////
////    long long total_min_fluctuation = 0; // ����С����ֵ
////
////    for (int i = 0; i < n; ++i) {
////        int min_fluctuation;
////
////        if (i == 0) {
////            // ��һ���µ���С����ֵΪ����Ӫҵ��
////            min_fluctuation = revenues[i];
////        }
////        else {
////            min_fluctuation = 999999; // ��ʼ��Ϊ���ֵ
////            for (int j = 0; j < i; ++j) {
////                int fluctuation = abs(revenues[j] - revenues[i]);
////                if (fluctuation < min_fluctuation) {
////                    min_fluctuation = fluctuation;
////                }
////            }
////        }
////
////        total_min_fluctuation += min_fluctuation; // �ۼ���С����ֵ
////    }
////
////    cout << total_min_fluctuation << endl; // ������
////    return 0;
////}
