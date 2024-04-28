#include <iostream>
using namespace std;

void myFunction_1()
{
	int a,b,c,d,e,f,g,h;
	cout << "Згiдно з задачою працiвник заробляє 450грн/год " << endl;
	cout << "Тому за два тижнi(112год) вiн заробить 50400грн " << endl;



	a = (50400 * 15) / 100;
	cout << "Скiльки потрiбно заплатити податку на прибуток фiзособи(15%):" << a << endl;
	b = 50400 - a;
	cout << "Кошти якi є на руках:" << b << endl;



	c = (b * 2) / 100;
	cout << "Скiльки потрiбно заплатити пенсiйного податку(2%)" << c << endl;
	d = b - c;
	cout << "Кошти якi є на руках:" << d << endl;



	e = (d * 0.6) / 100;
	cout << "Скiльки потрiбно заплатити податку до Фонду(0.6%)" << e <<endl;
	f = b - c;
	cout << "Кошти якi є на руках:" << f <<endl;



	g = (d * 1) / 100;
	cout << "Скiльки потрiбно заплатити податку на загально обов'язкове(1%)" << g << endl;
	h = f - g;
	cout << "Кошти якi є на руках:" << h << endl;


	cout << "Отже кошти якi отримає парацiвник на виходi:" << h <<endl;
}
void myFunction_2(int size)
{
	switch (size)
	{
		case 23: cout << "За європейским стандартом це 37/38, а за стандартом Британiї та США це 8" << endl;break;
		case 25: cout << "За європейским стандартом це 39/40, а за стандартом Британiї та США це 9" << endl;break;
		case 27: cout << "За європейским стандартом це 41/42, а за стандартом Британiї та США це 10" << endl;break;
		case 29: cout << "За європейским стандартом це 43/44, а за стандартом Британiї та США це 11" << endl;break;
		case 31: cout << "За європейским стандартом це 45/46, а за стандартом Британiї та США це 12" << endl;break;
		default: cout << "Такого розмiру немає, спробуйте iнший" << endl;
	}

}
void myFunction_3(int N)
{
	cout << "Введiть значення вiд 0 до 7483650 " << endl;
	cin >> N;
	if (N > 7483650)
	{
		cout << "Ваше число не пiдходить у вказаний дiапазон";
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
			cout << endl << "Кiлькiсть бiнарних " << (binaryNum[0] == 0 ? "нулiв" : "одиниць") << ": " << count << endl;
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
	cout << "Для виконання myFunction_1 натиснiть 'n': " << endl;		
	cout << "Для виконання myFunction_2 натиснiть 'm': " << endl;
	cout << "Для виконання myFunction_3 натиснiть 'q': " << endl;
	cin >> userInput;


	if (tolower(userInput) == 'n')
	{
	myFunction_1();
	}
	if (tolower(userInput) == 'm')
	{
	int size;
	cout << "Введiть розмiр шкарпеток за українською системою: ";
	cin >> size;
	myFunction_2(size);
	}
	if (tolower(userInput) == 'q')
	{
	myFunction_3(0);
	}
	if (tolower(userInput) == 'w')
	{
	cout << "Для закiнчення натиснiть 'w': ";
	}
	if (tolower(userInput) != 'n')
	{
	
	}
} 
while (tolower(userInput) != 'w');


	return(0);

}