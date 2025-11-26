#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 0.0;
    double b = 2.0;
    int k;

    cout << "Введіть k (натуральне число): ";
    cin >> k;

    double h = (b - a) / k;

    cout << "\nТаблиця значень функції y = e^(3x^2 + 1)\n";
    cout << "----------------------------------------\n";
    cout << "   x\t\t   y\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double y = exp(3 * x * x + 1);
        cout << x << "\t\t" << y << endl;
    }

    return 0;
}
