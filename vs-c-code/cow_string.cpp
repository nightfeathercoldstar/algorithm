//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//char c;
//
//string get_str(string str) {
//	string str1;
//	long long lth = str.size();
//	char ch = str.back();
//	str1 = ch + str;
//	str1.erase(lth, 1);
//	return str + str1;
//}
//
//void iteration(string str,long long num) {
//	long long lth = str.size();
//	if (lth >= num)c = str[num - 1];
//	else {
//		iteration(get_str(str), num);
//	}
//}
//
//int main() {
//	string str;
//	long long num;
//	cin >> str >> num;
//	iteration(str,num);
//	printf("%c", c);
//	return 0;
//}
//
