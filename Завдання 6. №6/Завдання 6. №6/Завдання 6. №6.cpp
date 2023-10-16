#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int size = 10; 
    int arr[size];

   
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; 
    }

    
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

   
    cout << "Масив після обміну найбільшого та найменшого елементів: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
