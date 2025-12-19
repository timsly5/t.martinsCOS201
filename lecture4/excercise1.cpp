#include <iostream>
using namespace std;

int Sum(int Input1, int Input2) {
    int add = Input1 + Input2;
    cout<<add<<endl;
    return add;

}

int main(){
    int Input1;
    int Input2;
    cout<<"Input 2 digits you would like to sum =====>";
    cin>>Input1>>Input2;

    Sum(Input1,Input2);
}