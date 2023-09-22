
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");
    double num1, num2;

  
    cout << "Введіть перше число: ";
    cin >> num1;

    cout << "Введіть друге число: ";
    cin >> num2;

    
    if (num1 > num2) {
        cout << "перше число більше другого" << endl;
    }
    else if (num1 < num2) {
       cout << "перше число менше другого" << endl;
    }
    else {
        cout << "перше число рівне другому" << endl;
    }

    return 0;
}

