#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int sum = 0;
    int count = 0;

    do {
        int number;
        std::cout << "Введіть число: ";
        std::cin >> number;

        sum += number;
        count++;

    } while (count < 7);

    std::cout << "Сума семи введених чисел: " << sum << std::endl;

    return 0;
}
