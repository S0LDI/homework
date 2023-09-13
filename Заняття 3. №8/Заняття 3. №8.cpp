#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ukr");
    double vtraty_na_100_km, tsina_za_lit, vidstan;

    cout << "Введіть витрати пального на 100 км (літри): ";
    cin >> vtraty_na_100_km;

    cout << "Введіть ціну 1 л пального (грн): ";
    cin >> tsina_za_lit;

    cout << "Введіть відстань (км): ";
    cin >> vidstan;

   
    double vitrata = (vidstan / 100) * vtraty_na_100_km * tsina_za_lit;

    
    cout << "Водій витратить " << vitrata << " грн, щоб проїхати " << vidstan << " км." << endl;

    return 0;
}

