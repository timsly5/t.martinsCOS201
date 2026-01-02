#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    int rolls[1000];
    srand(time(0));
    for(int i = 0; i<1000; i++){
        rolls[i]= rand()% 6+1;
    }

    int occurence1 = 0;
    int occurence2 = 0;
    int occurence3 = 0;
    int occurence4 = 0;
    int occurence5 = 0;
    int occurence6 = 0;


    for(int i = 0; i<1000;i++){

    if(rolls[i] == 1){
        occurence1 ++;}
    else if(rolls[i] == 2){
        occurence2++;
    }
    else if(rolls[i] == 3){
        occurence3++;
    }
    else if(rolls[i] == 4){
        occurence4++;
    }
    else if(rolls[i] == 5){
        occurence5++;
    }
    else{occurence6++;}

    }
    cout<<"The number of occurencies of the value 1 is "<<occurence1<<endl;
    cout<<"The number of occurencies of the value 2 is "<<occurence2<<endl;
    cout<<"The number of occurencies of the value 3 is "<<occurence3<<endl;
    cout<<"The number of occurencies of the value 4 is "<<occurence4<<endl;
    cout<<"The number of occurencies of the value 5 is "<<occurence5<<endl;
    cout<<"The number of occurencies of the value 6 is "<<occurence6<<endl;

}

