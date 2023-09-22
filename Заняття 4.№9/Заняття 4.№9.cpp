#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    char sumbol;

    
    std::cout << "Введіть символ: ";
    std::cin >> sumbol;

    
    if (isdigit(sumbol))
        std::cout << "Символ є цифрою" << std::endl;
    else
        std::cout << "Символ не є цифрою" << std::endl;

    return 0;
}
