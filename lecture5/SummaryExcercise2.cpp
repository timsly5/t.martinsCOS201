#include <iostream>
using namespace std;

int main(){
    int NumberOfStudents;
    cout<<"Enter the total number of students =====> ";
    cin>>NumberOfStudents;

    int grade[NumberOfStudents];
    
    int i = 0;
    while(i<NumberOfStudents){
        cout<<"Enter the grades of the students =====> ";
        cin>>grade[i];
        i++;
    }

    int best = grade[0];
    for (int i = 1; i < NumberOfStudents; i++) {
    if (grade[i] > best) {
        best = grade[i];
    }
    }
    for(int i = 0; i< NumberOfStudents; i++){
        
            cout<<"Student "<< i <<" Score is "<<grade[i]<<" and grade is ";

            if(grade[i] >= best - 10){
                cout<<"A"<<endl;
            }
            else if(grade[i] >= best - 20){
                cout<<"B"<<endl;
            }
            else if(grade[i] >= best - 30){
                cout<<"C"<<endl;
            }
            else if(grade[i] >= best - 40){
                cout<<"D"<<endl;
            }
            else{cout<<"F"<<endl;}
        }
    }
    
