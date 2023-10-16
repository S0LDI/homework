#include <iostream>
#include <string>

int countDigitsInString(const std::string& str) {
    int count = 0;

    for (char ch : str) {
        if (std::isdigit(ch)) {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "ukr");
    std::string inputString;
    std::cout << "Введіть рядок: ";
    std::cin >> inputString;

    int digitCount = countDigitsInString(inputString);

    std::cout << "Кількість цифр у рядку: " << digitCount << std::endl;

    return 0;
}
