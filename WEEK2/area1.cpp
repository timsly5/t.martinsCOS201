// reading input from keyboard
#include <iostream>
using namespace std;

int main()
{
    double radius;
    cout << "Enter a radius: ";
    cin >> radius;

    double area;
    double pi = 3.142;
    area = radius * radius * pi;

    cout << "Area is: " << area << endl;

    return 0;
}

