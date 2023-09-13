#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ukr");

    const double euroRate = 31.0;  
    const double dollarRate = 27.0;  
    const double zlotyRate = 7.0;  

    double amountInHryvnia;
    cout << "Введіть суму в гривнях: ";
    cin >> amountInHryvnia;

    
    double amountInEuro = amountInHryvnia / euroRate;
    double amountInDollars = amountInHryvnia / dollarRate;
    double amountInZloty = amountInHryvnia / zlotyRate;

    cout << "Сума в євро: " << amountInEuro << endl;
    cout << "Сума в доларах: " << amountInDollars << endl;
    cout << "Сума в злотих: " << amountInZloty << endl;

    return 0;
}
