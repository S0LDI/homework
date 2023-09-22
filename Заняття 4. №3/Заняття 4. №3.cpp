
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2, num3;

    cout << "Введіть три цілих числа через пробіл: ";
    cin >> num1 >> num2 >> num3;

   
    bool isordered = (num1 < num2) && (num2 < num3);

   
    cout << (isordered ? "true" : "false") << endl;

    return 0;
}
