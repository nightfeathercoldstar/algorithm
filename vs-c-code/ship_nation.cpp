//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<string>
//using namespace std;
//
//int book[100001] = { 0 }, a[300002] = { 0 }, queue[300002] = { 0 }; // ��ʼ������
//
//int main() {
//    int n, t, k, head = 0, country = 0, tail = 0; // �������
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> t >> k;
//        for (int j = 1; j <= k; ++j) {
//            queue[++tail] = t; // �ö��д���ʱ��
//            cin >> a[tail]; // �������
//            if (book[a[tail]]++ == 0)
//                ++country; // �����ǰû����������������ӹ�������
//        }
//        while (t - queue[head] >= 86400) { // ��Ҫ����
//            if (--book[a[head++]] == 0) // ������һ����
//                --country; // ���Ҳ������������
//        }
//        cout << country << endl; // �����ǰ��������
//    }
//    return 0;
//}
