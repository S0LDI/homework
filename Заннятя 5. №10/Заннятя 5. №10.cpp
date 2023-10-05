#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");
    char operation;
    double num1, num2, result;

    std::cout << "Ласкаво просимо до калькулятора!" << std::endl;
    std::cout << "Введіть перше число: ";
    std::cin >> num1;

   
    std::cout << "Оберіть операцію:" << std::endl;
    std::cout << "1. Додавання (+)" << std::endl;
    std::cout << "2. Віднімання (-)" << std::endl;
    std::cout << "3. Множення (*)" << std::endl;
    std::cout << "4. Ділення (/)" << std::endl;
    std::cout << "5. Піднесення до степеня (^)" << std::endl;

    std::cout << "Ваш вибір: ";
    std::cin >> operation;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
        }
        else {
            std::cout << "Помилка: Ділення на нуль!" << std::endl;
            return 1; 
        }
        break;
    case '^':
        result = pow(num1, num2);
        break;
    default:
        std::cout << "Неправильний вибір операції!" << std::endl;
        return 1; 
    }

    std::cout << "Результат: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;
}
