#include <iostream>
#include <clocale>

bool ftb() {
    std::cout << "Enter your a: ";
    int a = 0;
    std::cin >> a;

    std::cout << "Enter your b: ";
    int b = 0;
    std::cin >> b;

    return (a + 1 >= b);
}

int main() {
    std::cout << std::boolalpha << ftb();
    return 0;
}
