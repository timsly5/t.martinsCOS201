#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;

int main(){
    char arr1[20] = "Computer ";
    char arr2[] = "Science";

    strcat(arr1,arr2);

    cout<<"The catenation of the 2 arrays is "<<arr1<<endl;

    char arr4[15] = "Software" ;
    char arr5[] = "Engineer";
    strncat(arr4,arr5,4);

    cout<<"The catenation of the 2 arrays of only 4 characters is "<<arr4<<endl;

    char arr6[] = "market";
    char arr7[] = "target";

    cout<<strcmp(arr6, arr7)<<endl;

    string z = "201";
    int x;

    stringstream ss(z);  
    ss >> x;

    cout << x << endl;



    
    int y = 20;
    stringstream sc;

    sc<< y;
    string s = sc.str();
    cout<<s<<endl;

    


    


}
