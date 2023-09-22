#include <iostream>

using namespace std;
int main() {
    setlocale(LC_ALL, "ukr"); 

    int number;

    
    cout << "Введіть трьохцифрове число: ";
    cin >> number;

    
    int num1 = number / 100;  
    int lastnum = number % 10;  

    if (num1 == lastnum) {
        cout << "Число має однакові першу і останню цифри" << endl;
    }
    else {
        cout << "Число не має однакових першої і останньої цифр" << endl;
    }

    return 0;
}

