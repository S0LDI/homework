#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int size = 10; 
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        arr[i] = (i % 3 == 0) ? -i : i; 
    }

    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }

    int countElementsBetweenNegatives = 0;

    
    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex != lastNegativeIndex) {
        countElementsBetweenNegatives = lastNegativeIndex - firstNegativeIndex - 1;
    }

    cout << "Кількість елементів між першим і останнім від'ємним елементом: " << countElementsBetweenNegatives << endl;

    return 0;
}
