

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    cout << "введите 3 числа что бы узнать среднее арифметическое " << endl;
    int num1, num2, num3;
    cin>> num1 >> num2 >> num3;
    double avarage = (num1 + num2 + num3) / 3;
    cout << "результат" << avarage << endl;




    return 0;
}

