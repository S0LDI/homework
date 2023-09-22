#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    double length, width;

   
    cout << "Введіть довжину прямокутника: ";
    cin >>
        length;

    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    if (
        length ==width) {
        cout << "Прямокутник є квадратом" << endl;
    }
    else {
        cout << "Прямокутник не є квадратом" << endl;
    }

    return 0;
}

