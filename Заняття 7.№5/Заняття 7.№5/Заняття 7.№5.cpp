#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;
    int a[100]; 
    int newSize = 0;

    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        std::cin >> a[newSize];
        if (a[newSize] % 2 == 0) {
            newSize++; 
        }
    }

    std::cout << "Масив після видалення непарних чисел: ";
    for (int i = 0; i < newSize; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}
