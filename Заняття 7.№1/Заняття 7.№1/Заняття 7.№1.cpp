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


    int totalSeconds = hours * 3600 + minutes * 60 + seconds;


    std::cout << "Кількість секунд, які пройшли від початку доби: " << totalSeconds << " секунд" << std::endl;

    return 0;