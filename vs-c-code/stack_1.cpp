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
//			currentNumber += input; // �������ַ���ӵ���ǰ�����ַ�����
//			cin >> input;
//		}
//
//		if (!currentNumber.empty()) {
//			num.push(stoi(currentNumber));
//			currentNumber.clear(); // ��յ�ǰ�����ַ���
//		}// �����ȡ��һ�����������֣�����ת��Ϊ������ѹ��ջ��
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
//				currentNumber += input; // �������ַ���ӵ���ǰ�����ַ�����
//				cin >> input;
//			}
//
//			if (!currentNumber.empty()) {
//				num.push(stoi(currentNumber));
//				currentNumber.clear(); // ��յ�ǰ�����ַ���
//			}// �����ȡ��һ����������
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