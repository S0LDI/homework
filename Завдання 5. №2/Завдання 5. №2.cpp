
#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int hours, minutes, seconds;

   
    std::cout << "Введіть години: ";
    std::cin >> hours;

    std::cout << "Введіть хвилини: ";
    std::cin >> minutes;

    std::cout << "Введіть секунди: ";
    std::cin >> seconds;

  
    if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
        std::cout << "Час є допустимим." << std::endl;
    }
    else {
        std::cout << "Час недопустимий." << std::endl;
    }

    return 0;
}

