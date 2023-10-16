#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    const int size = 10; 
    int A[size];
    int B[size];

   
    for (int i = 0; i < size; i++) {
        A[i] = i + 1;
    }

  
    for (int i = 0; i < size; i++) {
        B[i] = A[i];
    }

   
    cout << "Масив B (копія масиву A): " << endl;
    for (int i = 0; i < size; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
