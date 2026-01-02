#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k] = list1[i];
            i++;
        } else {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }

    while (i < size1) {
        list3[k] = list1[i];
        i++;
        k++;
    }

    while (j < size2) {
        list3[k] = list2[j];
        j++;
        k++;
    }
}


int main(){
    const int list1[] = {2,4,6,8,10};
    int size1 = 5;

    const int list2[]= {1,3,5,7,9};
    int size2 = 5;

    int list3[10];

    merge(list1,size1,list2,size2,list3);
    for (int i = 0; i < 10; i++)
        cout << list3[i] << " ";

    return 0;
}