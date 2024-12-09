//#include<iostream>
//#include<stack>
//#include<queue>
//#include <cctype>
//#include <string>
//#include <sstream>
//#include <cmath>
//
//using namespace std;
//int main() {
//	stack<int>num;
//	queue<char>ch;
//	char input;
//	int step1 = 0;
//	int step2 = 0;
//	int num1 = 0, result = 0, num2 = 0;
//	int get_num;
//	string currentNumber;
//	/*cin >> input;
//	result = input - '0';*/
//	cin >> input;
//	while (input != '@') {
//		/*while(isdigit(input)) {
//			get_num = input - '0';
//			num.push(get_num);
//			step2++;
//			cin >> input;
//		}*/
//		while (isdigit(input)) {
//			currentNumber += input; // 将数字字符添加到当前数字字符串中
//			cin >> input;
//		}
//
//		if (!currentNumber.empty()) {
//			num.push(stoi(currentNumber));
//			currentNumber.clear(); // 清空当前数字字符串
//		}// 如果读取到一个完整的数字，将其转换为整数并压入栈中
//		if (input == '.') {
//			cin >> input;
//			while (input != '@'&&!isdigit(input)&&input!='.') {
//					step1++;
//					if (step1 == 1) {
//						num1 = num.top();
//						num.pop();
//						result = num.top();
//						num.pop();
//					}
//					else {
//						num1 = num.top();
//						num.pop();
//					}
//					if (input == '+')result += num1;
//					if (input == '-')result -= num1;
//					if (input == '*')result *= num1;
//					if (input == '/')result /= num1;
//					cin >> input;
//			}
//			while (isdigit(input)) {
//				currentNumber += input; // 将数字字符添加到当前数字字符串中
//				cin >> input;
//			}
//
//			if (!currentNumber.empty()) {
//				num.push(stoi(currentNumber));
//				currentNumber.clear(); // 清空当前数字字符串
//			}// 如果读取到一个完整的数
//		}
//		/*if (input == '+' || input == '-' || input == '*' || input == '/') {
//			ch.push(input);
//		}*/
//	}
//	/*char mark;
//	result = num.top();
//	num.pop();
//	
//	step--;
//	for (int i = 0; i < step; i++) {
//		mark = ch.front();
//		ch.pop();
//		
//		num1 = num.top();
//		num.pop();
//	}*/
//	printf("%d", result);
//	return 0;
//}