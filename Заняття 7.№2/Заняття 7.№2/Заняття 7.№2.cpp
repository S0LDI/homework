#include <iostream>

int main() {
    setlocale(LC_ALL, "ukr");
   
    int* dynamicInt = new int(10);
    double* dynamicDouble = new double(5.5);
    char* dynamicChar = new char('A');


    std::cout << "dynamicInt: " << *dynamicInt << std::endl;
    std::cout << "dynamicDouble: " << *dynamicDouble << std::endl;
    std::cout << "dynamicChar: " << *dynamicChar << std::endl;

    
    double product = *dynamicInt * *dynamicDouble;

   
    std::cout << "Добуток dynamicInt і dynamicDouble: " << product << std::endl;

    
    double average = (*dynamicInt + *dynamicDouble + *dynamicChar) / 3.0;

  
    std::cout << "Середнє арифметичне: " << average << std::endl;

  
    delete dynamicInt;
    delete dynamicDouble;
    delete dynamicChar;

    return 0;
}
