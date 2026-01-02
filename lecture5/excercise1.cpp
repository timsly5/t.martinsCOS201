#include <iostream>
using namespace std;

int main() {
    int element[8] = {79, 76, 52, 45, 62, 43, 22, 11};
    int min = 0;
    int max = element[0];

    for (int i = 1; i < 8; i++) {
        if (element[i] < element[min]) {
            min = i;
        }
    }

    cout << "Index of the smallest element in this array is " << min << endl;

    for(int i = 1; i<8;i++){
        if(element[i]>max){
            max = element[i];
        }
    }
    cout<<"The largest element in the array is "<<max<<endl;

    return 0;
}
