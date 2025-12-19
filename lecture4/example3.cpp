#include <iostream>
using namespace std;

int maxInteger(int input1, int input2){
    if (input1>input2){
        return input1;
    }
    else{return input2;}

}

double maxDouble(double double1, double double2){
    if(double1>double2){
        return double1;
    }
    else{return double2;}
}

double maxDouble3(double doublee1, double doublee2, double doublee3){
    if(doublee1> doublee2 && doublee3){
        return doublee1;
    }
    else if(doublee2 > doublee1 && doublee3 ){
        return doublee2;
    }
    else{return doublee3;}
}

int main(){
    int input1;
    int input2;
    double double1;
    double double2;
    double doublee1;
    double doublee2;
    double doublee3;

    cout<<"Input 2 integers =====>";
    cin>>input1>>input2;

    cout<<"Input 2 decimal numbers =====>";
    cin>>double1>>double2;

    cout<<"Input 3 decimal numbers =====>";
    cin>>doublee1>>doublee2>>doublee3;

    cout<<"The maximum between "<<input1<<" and "<<input2<<" is "<<maxInteger(input1,input2)<<endl;
    cout<<"The maximum between "<<double1<<" and "<<double2<<" is "<<maxDouble(double1,double2)<<endl;
    cout<<"The maximum between "<<doublee1<<", "<<doublee2<<" and "<<doublee3<<" is "<<maxDouble3(doublee1,doublee2,doublee3)<<endl;


}