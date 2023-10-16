#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "ukr");
    const int arraySize = 7;
    int array[arraySize];

    
    std::srand(std::time(0));

   
    for (int i = 0; i < arraySize; ++i) {
        array[i] = std::rand() % 63 - 12;
    }

    
    std::cout << "Елементи масиву: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

   
    int negativeCount = 0;
    int positiveCount = 0;

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] < 0) {
            negativeCount++;
        }
        else if (array[i] > 0) {
            positiveCount++;
        }
    }

    std::cout << "Кількість від'ємних елементів: " << negativeCount << std::endl;
    std::cout << "Кількість додатніх елементів: " << positiveCount << std::endl;

    return 0;
}
