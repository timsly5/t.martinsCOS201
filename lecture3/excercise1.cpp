#include <iostream>
using namespace std;

int main(){
    int user_input = 1;
    int negative_input=0;
    int sum = 0;
    float average = 0.0;
    int positive_input = 0;
    while(user_input != 0){
        cout<<"Enter an integer (input ends if it is 0)=====>";
        cin>>user_input;

        if(user_input<0){
            negative_input++;
        }
        else if(user_input>0){
            positive_input++;
        }
        else{cout<<"code terminated"<<endl;}

        sum += user_input;
        average = sum/(negative_input+positive_input);



    }
    cout<<"Number of negative values is "<<negative_input<<endl;
    cout<<"Number of positive values is "<<positive_input<<endl;
    cout<<"The total is "<<sum<<endl;
    cout<<"average of all the values is "<<average<<endl;
    
}