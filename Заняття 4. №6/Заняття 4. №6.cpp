#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    int number;

    cout << "Введіть двоцифрове число: ";
    cin >> number;

    
    int num1 = number / 10;  
    int num2 = number % 10;  

    if (num1 == num2) {
        cout << "Число має однакові цифри" << endl;
    }
    else {
        cout << "Число не має однакових цифр" << endl;
    }

    return 0;
}

