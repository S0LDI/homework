#include <iostream>
using namespace std;

int main() 
{
    double prices[] = { 10.99, 5.49, 3.99, 8.79 };
    int quantities[] = { 2, 3, 1, 4 };

    cout << "******************************\n"
        << "         PURCHASE RECEIPT\n"
        << "******************************\n";
        

    double totalCost = 0;

    for (int i = 0; i < 4; ++i) {
        double cost = prices[i] * quantities[i];
        totalCost += cost;
        cout << "Item  " << i + 1 << ": $" << prices[i] << " x " << quantities[i] << " = $" << cost << endl;
    }

    cout << "******************************\n"
        << "Total Cost: $" << totalCost << endl
        << "******************************\n";

    return 0;
}



