<img width="893" height="198" alt="image" src="https://github.com/user-attachments/assets/8f8f578f-b4b5-4a9e-bab6-0c65d0a75c06" />
<img width="599" height="35" alt="image" src="https://github.com/user-attachments/assets/c4c6b7a8-5f48-4f50-983e-0a1d23020d9d" />

```
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    // Щоб українські літери працювали в консолі
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a = 0.0;   // початок відрізка
    double b = 2.0;   // кінець відрізка
    int k;

    cout << "Введіть k (натуральне число): ";
    cin >> k;

    // Крок табулювання
    double h = (b - a) / k;

    cout << "\nТаблиця значень функції y = e^(3x^2 + 1)\n";
    cout << "----------------------------------------\n";
    cout << "   x\t\t   y\n";
    cout << "----------------------------------------\n";

    // Табулювання
    for (int i = 0; i <= k; i++) {
        double x = a + i * h;
        double y = exp(3 * x * x + 1);   // e^(3x^2 + 1)
        cout << x << "\t\t" << y << endl;
    }

    return 0;
}

```

<img width="518" height="334" alt="Знімок екрана 2025-11-26 161021" src="https://github.com/user-attachments/assets/88417010-9933-4bc2-8215-d4ad06fa6087" />
