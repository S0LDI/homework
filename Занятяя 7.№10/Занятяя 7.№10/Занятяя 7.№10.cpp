#include <iostream>
#include <string>

void removeDuplicates(std::string& str) {
    int length = str.length();
    if (length <= 1) {
        return; 
    }

    int currentIndex = 1; 
    for (int i = 1; i < length; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < currentIndex; j++) {
            if (str[i] == str[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            str[currentIndex] = str[i];
            currentIndex++;
        }
    }
    str.resize(currentIndex); 
}

int main() {
    setlocale(LC_ALL, "ukr");
    std::string inputString;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, inputString);

    removeDuplicates(inputString);

    std::cout << "Результат: " << inputString << std::endl;

    return 0;
}
