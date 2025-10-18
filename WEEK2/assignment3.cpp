#include <iostream>
using namespace std;

int main()
{
    int originalamount;
    cout << "What is your total purchase amount? ";
    cin >> originalamount;


    int discountamount; 
    discountamount = originalamount * 0.06;

    int finalprice;
    finalprice = originalamount - discountamount;
    cout << "Final purchase amount = " << finalprice << endl;
}