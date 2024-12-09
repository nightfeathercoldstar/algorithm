//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<string>
//using namespace std;
//
//int book[100001] = { 0 }, a[300002] = { 0 }, queue[300002] = { 0 }; // 初始化数组
//
//int main() {
//    int n, t, k, head = 0, country = 0, tail = 0; // 定义变量
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> t >> k;
//        for (int j = 1; j <= k; ++j) {
//            queue[++tail] = t; // 用队列储存时间
//            cin >> a[tail]; // 输入国籍
//            if (book[a[tail]]++ == 0)
//                ++country; // 如果以前没有这个国籍，则增加国籍总数
//        }
//        while (t - queue[head] >= 86400) { // 重要部分
//            if (--book[a[head++]] == 0) // 跳到下一个人
//                --country; // 暂且不再有这个国籍
//        }
//        cout << country << endl; // 输出当前国籍总数
//    }
//    return 0;
//}
