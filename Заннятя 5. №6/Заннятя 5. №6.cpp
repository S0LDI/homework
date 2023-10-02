#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
    int count = 0;   
    int sum = 0;     

    
    while (count < 10) {
        int number;
        std::cout << "Введіть число " << (count + 1) << ": ";
        std::cin >> number;

        sum += number;  
        count++;       
    }

    
    double average = static_cast<double>(sum) / 10;

    std::cout << "Сума введених чисел: " << sum << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;

    return 0;
}
