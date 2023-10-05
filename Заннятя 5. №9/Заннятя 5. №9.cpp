#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    double centimeters;
    double meters, decimeters, millimeters;

    
    std::cout << "Введіть довжину в сантиметрах: ";
    std::cin >> centimeters;

    
    std::cout << "Оберіть одиницю довжини для переведення:" << std::endl;
    std::cout << "1. Метри" << std::endl;
    std::cout << "2. Дециметри" << std::endl;
    std::cout << "3. Міліметри" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        
        meters = centimeters / 100;
        std::cout << "Довжина в метрах: " << meters << " м." << std::endl;
        break;
    case 2:
      
        decimeters = centimeters / 10;
        std::cout << "Довжина в дециметрах: " << decimeters << " дм." << std::endl;
        break;
    case 3:
        
        millimeters = centimeters * 10;
        std::cout << "Довжина в міліметрах: " << millimeters << " мм." << std::endl;
        break;
    default:
        std::cout << "Неправильний вибір." << std::endl;
    }

    return 0;
}
