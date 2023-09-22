#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    int num1, num2;

    
    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

   
    if (num1 > num2) {
        int тимчасова = num1;
        num1 = num2;
        num2 = тимчасова;
    }

   
    std::cout << "Значення змінних після обміну:" << std::endl;
    std::cout << "Перше число: " << num1 << std::endl;
    std::cout << "Друге число: " << num2 << std::endl;

    return 0;
}
