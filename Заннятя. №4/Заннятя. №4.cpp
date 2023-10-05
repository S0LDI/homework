#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int age;
    char gender;

    
    std::cout << "Введіть вік: ";
    std::cin >> age;

    
    std::cout << "Введіть стать (Woman(w) або Man(M): ";
    std::cin >> gender;

    
    if ((gender == 'M' && age > 60) || (gender == 'W' && age > 55)) {
        std::cout << "Ця особа пенсійного віку." << std::endl;
    }
    else {
        std::cout << "Ця особа ще не на пенсії." << std::endl;
    }

    return 0;
}
