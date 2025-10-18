#include <iostream>
using namespace std;

int main()
{
    //to read inputs
    double number1, number2;
    cout << "input 2 numbers: ";
    cin >> number1 >> number2;

    //sum of numbers
    double sum = number1 + number2;
    cout << "sum of two numbers is: " << sum << endl;

    //difference of numbers
    double difference = number1 - number2;
    cout << "Difference of the two numbers is: " << difference << endl;

    //product of numbers
    double product = number1 * number2;
    cout << "Product of the two numbers is: " << product << endl;


    return 0;
}