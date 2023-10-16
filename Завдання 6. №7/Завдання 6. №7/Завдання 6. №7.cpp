#include <iostream>
using namespace std;

int main() {
    const int size = 10; 
    int arr[size];

    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }

    int sum = 0;

    
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }

    cout << "Сума елементів з непарними індексами: " << sum << endl;

    return 0;
}
