#include <iostream>
#include <clocale>

void ftb()
{
	std::cout << "Enter your a: ";
		int a = 0;
		std::cin >> a;

	std::cout << "Enter your b: ";
		int b = 0;
		std::cin >> b;

	std::cout << std::boolalpha << (a + 1 >= b ? true : false);
}

void copyright()
{
	setlocale(LC_ALL, "ukr");
		std::cout << "+----------------------------------+\n";
		std::cout << "|���������� ��������� ����� ��-23  |\n";
		std::cout << "|����������� �������               |\n";
		std::cout << "|\u00A9 ��i ����� �������i             |\n";
		std::cout << "+----------------------------------+\n";
}

int main()
{
	copyright();

		return 0;
}

