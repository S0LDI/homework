#include <iostream>
#include <vector>

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    std::cout << "Введіть розмір масиву: ";
    std::cin >> n;
    std::vector<int> a(n);

    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    if (a[0] % 2 == 0) {
        for (int i = 0; i < n; i++)
            if (a[i] % 2 != 0)
                std::cout << a[i] << " ";
    }
    else {
        for (int i = 0; i < n; i++)
            if (a[i] % 2 == 0)
                std::cout << a[i] << " ";
    }

    return 0;
}
