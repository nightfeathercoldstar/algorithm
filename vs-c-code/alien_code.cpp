// #include<iostream>
// using namespace std;
// string read()
// {
// 	int n;
// 	string s = "", s1;
// 	char c;
// 	while (cin >> c)//һֱ�����ַ���ֱ��Ctrl+z
// 	{
// 		if (c == '[')
// 		{
// 			cin >> n;//����D
// 			s1 = read();//����X
// 			while (n--) s += s1;//�ظ�D��X
// 			//ע�����治��д��while (n--) s+=read();
// 		}
// 		else
// 		{
// 			if (c == ']') return s;//����X
// 			else s += c;//�������'['��']'���Ǿ���X��һ���ַ������Լӽ�X
// 		}
// 	}
// }
// int main()//�޶�������
// {
// 	cout << read();
// 	return 0;
// }