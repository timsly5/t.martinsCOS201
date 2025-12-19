#include <iostream>
using namespace std;

double max(double num1, double num2);

int main(){
    cout<<"The maximim between 3.0 and 5.4 is "<<max(5.4,3.0)<<endl;

    return 0;
}

double max(double num1, double num2){
    if (num1>num2){
        return num1;
    }
    else {return num2;}
}
