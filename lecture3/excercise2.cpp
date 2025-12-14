#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    string name, lowestName;
    float price, lowestPrice;

    cout << "Enter number of items: ";
    cin >> n;

    while (count <= n) {
        cout << "Enter item name: ";
        cin >> name;

        cout << "Enter item price: ";
        cin >> price;

        if (count == 1) {
            lowestPrice = price;
            lowestName = name;
        }
        else if (price < lowestPrice) {
            lowestPrice = price;
            lowestName = name;
        }

        count++;
    }

    cout << "Lowest priced item: " << lowestName << endl;
    cout << "Price: " << lowestPrice << endl;

    return 0;
}
