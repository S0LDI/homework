#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    long arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
    long sum = 0;
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    cout << "Сума парних елементів масиву: " << sum << endl;
    return 0;
}
