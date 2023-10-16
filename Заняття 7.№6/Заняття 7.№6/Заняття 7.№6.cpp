#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    int* a = new int[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int* b = new int[2 * n];
    for (int i = 0; i < n; i++)
    {
        b[2 * i] = a[i] / 10;
        b[2 * i + 1] = a[i] % 10;
    }
    cout << "Масив після перетворення: ";
    for (int i = 0; i < 2 * n; i++)
        cout << b[i] << " ";
    delete[] a;
    delete[] b;
    return 0;
}
