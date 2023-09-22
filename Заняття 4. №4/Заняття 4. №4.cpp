#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2, num3;

    cout << "Введіть три числа через пробіл: ";
    cin >> num1 >> num2 >> num3;

    bool hasPositive = false;  

  
    switch (num1) {
    case 1:
        break;
    case 2:
        hasPositive = true;
        break;
    case 3:
        break;
    }

    switch (num2) {
    case 1:
        break;
    case 2:
        hasPositive = true;
        break;
    case 3:
        break;
    }

    switch (num3) {
    case 1:
        break;
    case 2:
        hasPositive = true;
        break;
    case 3:
        break;
    }

    
    cout << (hasPositive ? "true" : "false") << endl;

    return 0;
}
