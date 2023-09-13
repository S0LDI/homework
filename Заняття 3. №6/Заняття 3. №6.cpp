#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ukr");
    const double marsOrbitalPeriodEarthDays = 686.0;   

    double marsOrbits; 

    cout << "Введіть кількість обертів Марсу навколо Сонця: ";
    cin >> marsOrbits;

    
    double marsYears = marsOrbits / marsOrbitalPeriodEarthDays;

    cout << "Кількість земних років, відповідних " << marsOrbits << " обертам Марсу: " << marsYears << " років" << endl;

    return 0;
}

