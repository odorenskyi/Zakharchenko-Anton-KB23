#pragma once
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;
    int Job_name() {
    SetConsoleOutputCP(866);
    const int width = 32;

    cout << (char)218 << string(width, (char)196) << (char)191 << endl;

    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "Розроблено студентом групи КБ-23";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "Захарченком Антоном             ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;
    cout << (char)179;
    SetConsoleOutputCP(1251);
    cout << "\u00A9" << " Всі права захищені!           ";
    SetConsoleOutputCP(866);
    cout << (char)179 << endl;

    cout << (char)192 << string(width, (char)196) << (char)217 << endl;

    return 0;
}