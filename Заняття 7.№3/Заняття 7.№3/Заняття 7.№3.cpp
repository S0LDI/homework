#include <iostream>
#include <clocale> 

int main() {
    setlocale(LC_ALL, "ukr"); 

    const int max_size = 100;
    int A[max_size] = { 1, 2, 4, 6 };
    int B[] = { 3, 7, 9, 10 };
    int size_A = 4;
    int size_B = 4;

    for (int i = 0; i < size_B; i++) {
        if (B[i] % 3 == 0 || B[i] % 7 == 0) {
            A[size_A] = B[i];
            size_A++;
        }
    }

    std::cout << "Масив A після додавання елементів з B, кратних 3 або 7: ";
    for (int i = 0; i < size_A; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
