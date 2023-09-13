#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ukr");
    double number;


   
    cout << "Введіть число: ";
    cin >> number;

    
    double square = number * number;
    double cube = number * number * number;

    
    cout << "Квадрат числа " << number << " дорівнює " << square << endl;
    cout << "Куб числа " << number << " дорівнює " << cube << endl;

    return 0;
}

