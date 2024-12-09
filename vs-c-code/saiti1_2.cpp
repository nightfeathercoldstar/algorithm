//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//void trans(string str1, string str2, int num1, int num2, int num3, int num4) {
//	string str3, str4;
//	for (int i = num1 - 1; i < num2; i++) {
//		str3 += str1[i];
//	}
//	for (int i = num3 - 1; i < num4; i++) {
//		str4 += str2[i];
//	}
//	int pos5 = str3.find("H");
//	int pos6 = str3.find("X");
//	while (pos5 != -1) {
//		int num = pos5;
//		str3.erase(num, 1);
//		str3.insert(num, 2, 'X');
//		pos5 = str3.find("H");
//	}
//	while (pos6 != -1) {
//		int num = pos6;
//		str3.erase(num, 1);
//		str3.insert(num, 2, 'H');
//		pos6 = str3.find("X");
//	}
//	int pos7 = str4.find("H");
//	int pos8 = str4.find("X");
//	while (pos7 != -1) {
//		int num = pos7;
//		str4.erase(num, 1);
//		str4.insert(num, 2, 'X');
//		pos7 = str4.find("H");
//	}
//	while (pos8 != -1) {
//		int num = pos8;
//		str4.erase(num, 1);
//		str4.insert(num, 2, 'H');
//		pos8 = str4.find("X");
//	}
//	int pos1 = str3.find("HHH");
//	int pos2 = str3.find("XXX");
//	while (pos1 != -1) {
//		int num = pos1;
//		str3.erase(num, 3);
//		pos1 = str3.find("HHH");
//	}
//	while (pos2 != -1) {
//		int num = pos2;
//		str3.erase(num, 3);
//		pos2 = str3.find("XXX");
//	}
//	int pos3 = str4.find("HHH");
//	int pos4 = str4.find("XXX");
//	while (pos3 != -1) {
//		int num = pos3;
//		str4.erase(num, 3);
//		pos3 = str4.find("HHH");
//	}
//	while (pos4 != -1) {
//		int num = pos4;
//		str4.erase(num, 3);
//		pos4 = str4.find("XXX");
//	}
//	if (str3 == str4)printf("YES\n");
//	else printf("NO\n");
//}
//
//int main() {
//	string str1, str2;
//	cin >> str1 >> str2;
//	int step;
//	cin >> step;
//	int num1, num2, num3, num4;
//	for (int i = 0; i < step; i++) {
//		cin >> num1 >> num2 >> num3 >> num4;
//		trans(str1, str2, num1, num2, num3, num4);
//	}
//	/*trans(str1, str2, 1, 2, 3, 4);*/
//	return 0;
//}