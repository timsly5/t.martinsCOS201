#include <iostream>
#include <string>
using namespace std;

inline void info_display(int year_of_adm, string name = "Steve"){
    cout<<"Length of "<<name<<" is "<<name.length();
    cout<<". Admitted in the year "<<year_of_adm<<endl;
}

int main(){
    string name = "Jemimah";
    int year_of_adm = 2009;

    info_display(year_of_adm);
    cout<<endl;
    info_display(year_of_adm,name);
}


