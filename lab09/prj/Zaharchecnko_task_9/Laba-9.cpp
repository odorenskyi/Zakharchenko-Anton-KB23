#include <iostream>
using namespace std;

void myFunction_1()
{
	int a,b,c,d,e,f,g,h;
	cout << "��i��� � ������� ����i���� �������� 450���/��� " << endl;
	cout << "���� �� ��� ����i(112���) �i� �������� 50400��� " << endl;



	a = (50400 * 15) / 100;
	cout << "��i���� ����i��� ��������� ������� �� �������� �i������(15%):" << a << endl;
	b = 50400 - a;
	cout << "����� ��i � �� �����:" << b << endl;



	c = (b * 2) / 100;
	cout << "��i���� ����i��� ��������� ����i����� �������(2%)" << c << endl;
	d = b - c;
	cout << "����� ��i � �� �����:" << d << endl;



	e = (d * 0.6) / 100;
	cout << "��i���� ����i��� ��������� ������� �� �����(0.6%)" << e <<endl;
	f = b - c;
	cout << "����� ��i � �� �����:" << f <<endl;



	g = (d * 1) / 100;
	cout << "��i���� ����i��� ��������� ������� �� �������� ����'������(1%)" << g << endl;
	h = f - g;
	cout << "����� ��i � �� �����:" << h << endl;


	cout << "���� ����� ��i ������ �����i���� �� �����i:" << h <<endl;
}
void myFunction_2(int size)
{
	switch (size)
	{
		case 23: cout << "�� ����������� ���������� �� 37/38, � �� ���������� ������i� �� ��� �� 8" << endl;break;
		case 25: cout << "�� ����������� ���������� �� 39/40, � �� ���������� ������i� �� ��� �� 9" << endl;break;
		case 27: cout << "�� ����������� ���������� �� 41/42, � �� ���������� ������i� �� ��� �� 10" << endl;break;
		case 29: cout << "�� ����������� ���������� �� 43/44, � �� ���������� ������i� �� ��� �� 11" << endl;break;
		case 31: cout << "�� ����������� ���������� �� 45/46, � �� ���������� ������i� �� ��� �� 12" << endl;break;
		default: cout << "������ ����i�� ����, ��������� i����" << endl;
	}

}
void myFunction_3(int N)
{
	cout << "����i�� �������� �i� 0 �� 7483650 " << endl;
	cin >> N;
	if (N > 7483650)
	{
		cout << "���� ����� �� �i������� � �������� �i������";
	}
	else
	{
		if (N == 0)
		{
			cout << "0";
		}
		else {
			int binaryNum[32];
			int i = 0;

			while (N > 0)
			{
				binaryNum[i] = N % 2;
				N = N / 2;
				i++;
			}
			int count = (binaryNum[0] == 0) ? i : 0;
			for (int j = 0; j < i; j++)
			{
				if (binaryNum[j] == 0)
				{
					count++;
				}
			}
			for (int j = i - 1; j >= 0; j--)
				cout << binaryNum[j];
			cout << endl << "�i���i��� �i������ " << (binaryNum[0] == 0 ? "���i�" : "�������") << ": " << count << endl;
		}
	}
	if (N < 0) N = -N;
	char b;
	if (N < 100) b = '99';
	b = (N / 100) % 10 + '0';
}


int main()
{
	setlocale(LC_ALL, "ukr");

	char userInput;
do
{
	cout << "��� ��������� myFunction_1 ������i�� 'n': " << endl;		
	cout << "��� ��������� myFunction_2 ������i�� 'm': " << endl;
	cout << "��� ��������� myFunction_3 ������i�� 'q': " << endl;
	cin >> userInput;


	if (tolower(userInput) == 'n')
	{
	myFunction_1();
	}
	if (tolower(userInput) == 'm')
	{
	int size;
	cout << "����i�� ����i� ��������� �� ���������� ��������: ";
	cin >> size;
	myFunction_2(size);
	}
	if (tolower(userInput) == 'q')
	{
	myFunction_3(0);
	}
	if (tolower(userInput) == 'w')
	{
	cout << "��� ���i������ ������i�� 'w': ";
	}
	if (tolower(userInput) != 'n')
	{
	
	}
} 
while (tolower(userInput) != 'w');


	return(0);

}