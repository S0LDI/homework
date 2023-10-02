#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    std::cout << "Введіть n: ";
    std::cin >> n;
    int sum = 0;
    int count = 0;
    int currentNumber = 1;
    do {
        if (currentNumber % 2 != 0) {
            std::cout << "Непарне число: " << currentNumber << ", Квадрат: " << currentNumber * currentNumber << std::endl; 
            sum += currentNumber * currentNumber;
            count++;
        }      
        currentNumber++;

    } while (count < n);

    std::cout << "Сума квадратів перших " << n << " непарних чисел: " << sum << std::endl;

    return 0;
}
