#define _USE_MATH_DEFINES  //Використовується задля числа PI
#include <iostream>
#include <cmath>

void myFunction()
{
	std::cout << "Enter your x ";
	int x = 0;
	std::cin >> x;

	std::cout << "Enter your y ";
	int y = 0;
	std::cin >> y;

	std::cout << "Enter your z ";
	int z = 0;
	std::cin >> z;

	int S = pow(2 * z + 1, x) - sqrt(fabs(y - 1 / 2) * z) + z + M_PI;		//pow = квадрат від числа, sqrt = корінь числа, fabs = модуль числа
	std::cout << "Your result is: " << S << std::endl;
}
int main()
{
	myFunction();

	return 0;
}
