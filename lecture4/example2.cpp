#include <iostream>
using namespace std;

void printGrade(int grade){
    if(grade>70 && grade<100){
        cout<<"Your grade is =====> A"<<endl;
    }
    else if(grade>60 && grade<69){
         cout<<"Your grade is  =====> B"<<endl;
    }
    else if(grade>50 && grade<59){
         cout<<"Your grade is =====> C"<<endl;
    }
    else if(grade>45 && grade<49){
         cout<<"Your grade is =====> D"<<endl;
    }
    else if(grade<45){
         cout<<"Your grade is =====> F"<<endl;
    }

    
}

int main(){
    int grade;
    cout<<"What was your score in this course =====>";
    cin>>grade;

    printGrade(grade);

    return 0;


}