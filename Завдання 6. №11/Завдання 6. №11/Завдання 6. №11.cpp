#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int B[10];
    for (int i = 0; i < 10; i++) {
        B[i] = A[9 - i];
    }

    cout << "Масив А:   Масив В:   Індекси:\n";
    for (int i = 0; i < 10; i++) {
        cout << A[i] << "          " << B[i] << "          " << i << endl;
    }

    return 0;
}
