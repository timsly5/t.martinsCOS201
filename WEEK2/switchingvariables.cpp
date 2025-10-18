// switching variables
#include <iostream>
using namespace std;

int main()
{
    double radius = 1.0;
    double pi = 3.142;
    double area = radius * radius * pi;
    cout << "The area for radius " << radius << " is " << area;

    radius = 2.0;
    pi = 3.142;
    area = radius * radius * pi;
    cout << "The area for radius " << radius << " is " << area;
}