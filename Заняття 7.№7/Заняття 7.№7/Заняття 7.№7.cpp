#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "ukr");
    std::string inputString;
    std::cout << "Введіть рядок: ";
    std::cin >> inputString;

    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '+') {
            inputString[i] = '-'; 
        }
    }

    std::cout << "Результат: " << inputString << std::endl;

    return 0;
}
