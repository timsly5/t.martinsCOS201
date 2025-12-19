#include <iostream>
using namespace std;

void printSum(int input1, int input2){
    int sum = input1 + input2;
    cout<<"Sum of "<<input1<<" and "<<input2<<" is "<<sum<<endl;


}

int main(){
    printSum(5,8);
    printSum(3,4);
}