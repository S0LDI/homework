#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    const int arraySize = 10; 
    int myArray[arraySize];   

    
    std::cout << "Введіть " << arraySize << " елементів масиву:\n";
    for (int i = 0; i < arraySize; i++) {
        std::cin >> myArray[i];
    }

    
    std::cout << "Введений масив:\n";
    for (int i = 0; i < arraySize; i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << "\n";

    
    int product = 1;
    for (int i = 0; i < arraySize; i++) {
        product *= myArray[i];
    }

    
    std::cout << "Добуток елементів масиву: " << product << "\n";

    return 0;
}
