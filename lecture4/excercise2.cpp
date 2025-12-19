#include <iostream>
using namespace std;

int square(int input){
    int answer = input * input;
    cout<<"The square of "<<input<<" is "<<answer<<endl;

}

int main(){
    int input;
    cout<<"Kindly enter a number to square =====>";
    cin>>input;
    square(input);
    
}