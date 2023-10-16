#include <iostream>
#include <string>

std::string encryptString(const std::string& input) {
    std::string result = input;

    for (char& ch : result) {
        if (std::isalpha(ch)) { 
            char base = islower(ch) ? 'a' : 'A'; 
            ch = (ch - base + 1) % 26 + base; 
        }
    }

    return result;
}

int main() {
    setlocale(LC_ALL,"ukr");
    std::string inputString;
    std::cout << "Введіть рядок: ";
    std::getline(std::cin, inputString);

    std::string encryptedString = encryptString(inputString);

    std::cout << "Зашифрований рядок: " << encryptedString << std::endl;

    return 0;
}
