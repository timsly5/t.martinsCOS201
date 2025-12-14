#include <iostream>
#include <ctime>
using namespace std;


int main(){
    srand(time(0));
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    int user_answer;
    int actual_answer= num1 - num2;

    cout<<"what is the value of "<<num1<<" - "<<num2<<"=====>";
    cin>>user_answer;

    while (actual_answer != user_answer){
        cout<<"Wrong answer. Try again. =====>"<<endl;
        cin>>user_answer;
    }
    cout<<"Correct answer!"<<endl;
    return 0;
}