#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    string name, lowestName, secondLowestName;
    float price, lowestPrice, secondLowestPrice;

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
            secondLowestPrice = price;
            secondLowestName = name;
        }
        else if (price < lowestPrice) {
            secondLowestPrice = lowestPrice;
            secondLowestName = lowestName;

            lowestPrice = price;
            lowestName = name;
        }
        else if (price < secondLowestPrice) {
            secondLowestPrice = price;
            secondLowestName = name;
        }

        count++;
    }

    cout << "Lowest priced item: " << lowestName
         << " - " << lowestPrice << endl;

    cout << "Second lowest priced item: " << secondLowestName
         << " - " << secondLowestPrice << endl;

    return 0;
}
