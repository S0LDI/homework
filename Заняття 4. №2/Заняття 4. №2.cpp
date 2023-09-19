#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int number;

    cout << "Введіть 2-цифрове число: ";
    cin >> number;

    
    int firstDigit = number / 10;

    int secondDigit = number % 10;

    int sum = firstDigit + secondDigit;

   
    cout << "Перша цифра: " << firstDigit << endl;
    cout << "Друга цифра: " << secondDigit << endl;
    cout << "Сума цифр: " << sum << endl;

    return 0;
}

