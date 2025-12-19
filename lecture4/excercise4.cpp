#include <iostream>
using namespace std;

inline int triple(int input){
    int answer = input * 3;
    cout<<"The triple of "<<input<<" is "<<answer<<endl;

    return answer;
}

int main(){
    triple(5);
    triple(6);

    cout<<endl;
}