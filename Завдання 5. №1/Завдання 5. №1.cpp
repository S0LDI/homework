
#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    double temperature;

   
    std::cout << "Введіть температуру: ";
    std::cin >> temperature;

    
    if (temperature < 35.0) {
        std::cout << "Понижена температура, стан ослабленого організму" << std::endl;
    }
    else if (temperature >= 35.0 && temperature <= 36.0) {
        std::cout << "Понижена температура" << std::endl;
    }
    else if (temperature > 36.6 && temperature <= 36.9) {
        std::cout << "Нормальна температура, людина здорова" << std::endl;
    }
    else {
        std::cout << "Ви ввели невірну температуру" << std::endl;
    }

    return 0;
}

