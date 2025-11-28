#include <iostream>
#include <cstdlib>
#include <ctime> //time (0)
using namespace std;

int main()
{
    srand(time(0));
    int number1 = rand() % 10;
    int number2 = rand() % 10;

    if (number1<number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    cout<< "WHAT IS "<< number1 << "-" << number2 << "?";
    
    int answer;
    cin>>answer;
    if (answer == (number1 - number2))
        cout << "Correct!" <<endl;
    else
        cout<< "Wrong. The correct answer is "<< (number1 - number2) <<endl;
    return 0;
    
    
}