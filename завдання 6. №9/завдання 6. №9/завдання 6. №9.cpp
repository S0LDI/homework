#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int size = 10; 
    int arr[size];

    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }

    
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    
    cout << "Змінений масив після обміну парних і непарних елементів: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

