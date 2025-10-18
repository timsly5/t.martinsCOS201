//swapping variables
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter 2 variables: ";
    cin >> a >>b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ",b = " << b << endl;

    return 0;
}