#include"StaticList.h"
int main(void) {
	cout << "AΪ���" << endl;
	cout << "BΪ����" << endl;
	cout << "CΪɾ��" << endl;
	cout << "DΪ����" << endl;
	cout << "F���" << endl;
	cout << "EΪ����" << endl;
	StaticList staticlist;
	string str;
	while (true) {
		cin >> str;
		if (str == "over")
			break;
		staticlist.Append(str);
	}
	char ch = ' ';
	int number;
	while (ch != 'e' && ch != 'E')
	{
		cout << "ѡ���������" << endl;
		cin >> ch;
		switch (ch)
		{
		case 'A':case 'a':
			cin >> str;
			staticlist.Append(str);
			cout << endl;
			break;
		case 'B':case 'b':
			cout << "�������ݺͲ����λ��" << endl;
			cin >> str;
			cin >> number;
			staticlist.Insert(str, number);
			cout << endl;
			break;
		case 'C':case 'c':
			cout << "������Ҫɾ����λ��" << endl;
			cin >> number;
			staticlist.Remove(number);
			cout << endl;
			break;
		case 'D':case 'd':
			cout << staticlist.Length();
			cout << endl;
			break;
		case 'F':case 'f':
			staticlist.Show();
			cout << endl;
			break;
		case'e':case'E':
			break;
		default:
			cout << "û��" << endl;
			break;
		}
	}
	return 0;
}