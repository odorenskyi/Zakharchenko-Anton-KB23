#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

void s_calculation(double a, double b, double c, double d, double e, double f) {
    setlocale(LC_ALL, "ukr");
    double x = a + b;
    double y = c * d;
    double z = e - f;

    // Fixed-point format
    cout << "�������� x: " << fixed << setprecision(2) << x << endl;
    cout << "�������� y: " << fixed << setprecision(2) << y << endl;
    cout << "�������� z: " << fixed << setprecision(2) << z << endl;

    // Hexadecimal floating-point format
    cout << "�������� x: " << hexfloat << x << endl;
    cout << "�������� y: " << hexfloat << y << endl;
    cout << "�������� z: " << hexfloat << z << endl;
}

int main() {
    double a = 5.0, b = 3.0, c = 2.0, d = 4.0, e = 10.0, f = 7.0;
    s_calculation(a, b, c, d, e, f);

    return 0;
}
