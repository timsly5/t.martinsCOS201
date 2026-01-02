#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size, int key){
    int low = 0;
    int high = size - 1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else {high = mid - 1;}
    }
    return -1;
}




int main(){
    int arr[] = {1,2,4,5,7,8,10,11};
    int size = 8;
    int key = 10;

    int search = BinarySearch(arr,size, key);

    if(search != -1){
        cout<<"The key "<<key<<" is at index "<<search<<endl;
    }
    else{cout<< "Key is not in the given array"<<endl;};
}