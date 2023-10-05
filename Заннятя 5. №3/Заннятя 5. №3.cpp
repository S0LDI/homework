#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int year;

    std::cout << "Введіть рік: ";
    std::cin >> year;


    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " - це високосний рік." << std::endl;
    }
    else {
        std::cout << year << " - це не високосний рік." << std::endl;
    }

    return 0;
}
