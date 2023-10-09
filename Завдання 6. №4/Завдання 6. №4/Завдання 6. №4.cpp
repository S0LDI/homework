#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int arr[30];
    for (int i = 0; i < 30; i++) {
        arr[i] = pow(2, i);
    }

    cout << "Елементи масиву у прямому порядку: ";
    for (int i = 0; i < 30; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Елементи масиву у зворотньому порядку: ";
    for (int i = 29; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
