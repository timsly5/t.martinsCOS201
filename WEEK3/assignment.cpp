#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    string name;
    cout<< "What is your name"<<endl;
    cin>>name;

    int member;
    cout<<"Are you a PAU student: 1=True  2=False"<< endl;
    cin>>member;
    if (member == 1 ) {
        cout<< "YES"<<endl;}
    else {cout<< "FALSE"<<endl;}

    int reg1 = 10000;
    int day1 = 3;
    int reg2 = 8000;
    int day2 = 5;
    int reg3 = 15000;
    int day3 = 7;
    int reg4 = 13000;
    int day4= 5;
    int reg5 = 5000;
    int day5 = 2;
    int campA = 10000;
    int campB = 2500;
    int campC = 5000;
    int campD = 13000;
    int campE = 5000;

    int course;
    cout<< "What course would you like to enroll for"<<endl << "1. Photography"<<endl << "2. Painting"<<endl << "3. Fish Farming"<<endl << "4. Baking"<<endl << "5. Public Speaking"<< endl;
    cin>>course;
    if (course == 1) {
        cout<< "Your choice of course is Photography"<<endl<< "This Photography course, runs for 3 days at a cost of $10,000 "<<endl;
        int accomodation;
        cout<< "What accomodation would you like to lodge at: "<<endl << "1. Camp house A --> $10,000"<<endl<< "2. Camp house B --> $2,500"<<endl<< "3. Camp house C --> $5,000"<<endl<< "4. Camp house D --> $13,000"<<endl<< "5. Camp house E --> $5,000"<<endl;
        cin>>accomodation;

        int price;
        if (accomodation ==1 ){
            price = campA*day1;
        
            cout<< "Total lodge price: " << price<<endl;
            srand(time(0));
            int promo = rand() % 100;
            int discountprice = price - (price * promo / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice<<endl;
            int total = discountprice + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHOTOGRAPY"<< "      DAYS:"<< day1 <<endl<< "Registration: "<< reg1 << " Random draw: "<< promo <<endl<< "TOTAL: "<< total <<endl;
        }
        else if (accomodation ==2) {
            int price2;
            price2 = campB * day1;

            cout<< "Total lodge price before discount: "<<price2<<endl;
            srand(time(0));
            int promo2 = rand() % 100;
            int discountprice2 = price2 - (price2 * promo2 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice2<<endl;
            int total2 = discountprice2 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHOTOGRAPY"<< "      DAYS:"<< day1 <<endl<< "Registration: "<< reg1 << " Random draw: "<< promo2 <<endl<< "TOTAL: "<< total2 <<endl;
        }
        else if (accomodation ==3) {
            int price3;
            price3 = campC * day1;

            cout<< "Total lodge price before discount: "<<price3<<endl;
            srand(time(0));
            int promo3 = rand() % 100;
            int discountprice3 = price3 - (price3 * promo3 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice3<<endl;
            int total3 = discountprice3 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHOTOGRAPY"<< "      DAYS:"<< day1 <<endl<< "Registration: "<< reg1 << " Random draw: "<< promo3 <<endl<< "TOTAL: "<< total3 <<endl;
        }
        else if (accomodation ==4) {
            int price4;
            price4 = campD * day1;

            cout<< "Total lodge price before discount: "<<price4<<endl;
            srand(time(0));
            int promo4 = rand() % 100;
            int discountprice4 = price4 - (price4 * promo4 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice4<<endl;
            int total4 = discountprice4 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHOTOGRAPY"<< "      DAYS:"<< day1 <<endl<< "Registration: "<< reg1 << " Random draw: "<< promo4 <<endl<< "TOTAL: "<< total4 <<endl;
        }
        else if (accomodation ==5) {
            int price5;
            price5 = campD * day1;

            cout<< "Total lodge price before discount: "<<price5<<endl;
            srand(time(0));
            int promo5 = rand() % 100;
            int discountprice5 = price5 - (price5 * promo5 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice5<<endl;
            int total5 = discountprice5 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHOTOGRAPY"<< "      DAYS:"<< day1 <<endl<< "Registration: "<< reg1 << " Random draw: "<< promo5 << "%discount"<< endl<< "TOTAL: "<< total5 <<endl;
        }
        else {cout<< "ERROR";}
        }
     else if (course ==2) {
        cout<< "Your choice of course is Painting"<<endl<< "This Painting course, runs for 5 days at a cost of $8,000 "<<endl;
        int accomodation2;
        cout<< "What accomodation would you like to lodge at: "<<endl << "1. Camp house A --> $10,000"<<endl<< "2. Camp house B --> $2,500"<<endl<< "3. Camp house C --> $5,000"<<endl<< "4. Camp house D --> $13,000"<<endl<< "5. Camp house E --> $5,000"<<endl;
        cin>>accomodation2;

        int price21;
        if (accomodation2 ==1 ){
            price21 = campA*day1;
        
            cout<< "Total lodge price: " << price21<<endl;
            srand(time(0));
            int promo21 = rand() % 100;
            int discountprice21 = price21 - (price21 * promo21 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice21<<endl;
            int total21 = discountprice21 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PAINTING"<< "      DAYS:"<< day2 <<endl<< "Registration: "<< reg2 << " Random draw: "<< promo21 <<endl<< "TOTAL: "<< total21 <<endl;
        }
        else if (accomodation2 ==2) {
            int price22;
            price22 = campB * day2;

            cout<< "Total lodge price before discount: "<<price22<<endl;
            srand(time(0));
            int promo22 = rand() % 100;
            int discountprice22 = price22 - (price22 * promo22 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice22<<endl;
            int total22 = discountprice22 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PAINTING"<< "      DAYS:"<< day2 <<endl<< "Registration: "<< reg2 << " Random draw: "<< promo22 <<endl<< "TOTAL: "<< total22 <<endl;
        }
        else if (accomodation2 ==3) {
            int price23;
            price23 = campC * day2;

            cout<< "Total lodge price before discount: "<<price23<<endl;
            srand(time(0));
            int promo23 = rand() % 100;
            int discountprice23 = price23 - (price23 * promo23 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice23<<endl;
            int total23 = discountprice23 + reg2;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PAINTING"<< "      DAYS:"<< day2 <<endl<< "Registration: "<< reg2 << " Random draw: "<< promo23 <<endl<< "TOTAL: "<< total23 <<endl;
        }
        else if (accomodation2 ==4) {
            int price24;
            price24 = campD * day2;

            cout<< "Total lodge price before discount: "<<price24<<endl;
            srand(time(0));
            int promo24 = rand() % 100;
            int discountprice24 = price24 - (price24 * promo24 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice24<<endl;
            int total24 = discountprice24 + reg2;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PAINTING"<< "      DAYS:"<< day2 <<endl<< "Registration: "<< reg2 << " Random draw: "<< promo24 <<endl<< "TOTAL: "<< total24 <<endl;
        }
        else if (accomodation2 ==5) {
            int price25;
            price25 = campD * day2;

            cout<< "Total lodge price before discount: "<<price25<<endl;
            srand(time(0));
            int promo25 = rand() % 100;
            int discountprice25 = price25 - (price25 * promo25 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice25<<endl;
            int total25 = discountprice25 + reg1;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: PHAINTING"<< "      DAYS:"<< day2 <<endl<< "Registration: "<< reg2 << " Random draw: "<< promo25 << "%discount"<< endl<< "TOTAL: "<< total25 <<endl;
        }
        else {cout<< "ERROR";}
     }
     else if (course == 3){ 
        cout<< "Your choice of course is Fish Farming "<<endl<< "This Fish Farming course, runs for 7 days at a cost of $15,000 "<<endl;
        int accomodation3;
        cout<< "What accomodation would you like to lodge at: "<<endl << "1. Camp house A --> $10,000"<<endl<< "2. Camp house B --> $2,500"<<endl<< "3. Camp house C --> $5,000"<<endl<< "4. Camp house D --> $13,000"<<endl<< "5. Camp house E --> $5,000"<<endl;
        cin>>accomodation3;

        int price31;
        if (accomodation3 ==1 ){
            price31 = campA*day3;
        
            cout<< "Total lodge price: " << price31<<endl;
            srand(time(0));
            int promo31 = rand() % 100;
            int discountprice31 = price31 - (price31 * promo31 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice31<<endl;
            int total31 = discountprice31 + reg3;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: FISH FARMING"<< "      DAYS:"<< day3 <<endl<< "Registration: "<< reg3 << " Random draw: "<< promo31 <<endl<< "TOTAL: "<< total31 <<endl;
        }
        else if (accomodation3 ==2) {
            int price32;
            price32 = campB * day3;

            cout<< "Total lodge price before discount: "<<price32<<endl;
            srand(time(0));
            int promo32 = rand() % 100;
            int discountprice32 = price32 - (price32 * promo32 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice32<<endl;
            int total32 = discountprice32 + reg3;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: FISH FARMING"<< "      DAYS:"<< day3 <<endl<< "Registration: "<< reg3 << " Random draw: "<< promo32 <<endl<< "TOTAL: "<< total32 <<endl;
        }
        else if (accomodation3 ==3) {
            int price33;
            price33 = campC * day3;

            cout<< "Total lodge price before discount: "<<price33<<endl;
            srand(time(0));
            int promo33 = rand() % 100;
            int discountprice33 = price33 - (price33 * promo33 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice33<<endl;
            int total33 = discountprice33 + reg3;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: FISH FARMING"<< "      DAYS:"<< day3 <<endl<< "Registration: "<< reg3 << " Random draw: "<< promo33 <<endl<< "TOTAL: "<< total33 <<endl;
        }
        else if (accomodation3 ==4) {
            int price34;
            price34 = campD * day3;

            cout<< "Total lodge price before discount: "<<price34<<endl;
            srand(time(0));
            int promo34 = rand() % 100;
            int discountprice34 = price34 - (price34 * promo34 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice34<<endl;
            int total34 = discountprice34 + reg3;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: FISH FARMING"<< "      DAYS:"<< day3 <<endl<< "Registration: "<< reg3 << " Random draw: "<< promo34 <<endl<< "TOTAL: "<< total34 <<endl;
        }
        else if (accomodation3 ==5) {
            int price35;
            price35 = campD * day3;

            cout<< "Total lodge price before discount: "<<price35<<endl;
            srand(time(0));
            int promo35 = rand() % 100;
            int discountprice35 = price35 - (price35 * promo35 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice35<<endl;
            int total35 = discountprice35 + reg3;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: FISH FARMING"<< "      DAYS:"<< day3 <<endl<< "Registration: "<< reg3 << " Random draw: "<< promo35 << "%discount"<< endl<< "TOTAL: "<< total35 <<endl;
        }
        else {cout<< "ERROR";}
     }
     else if (course ==4) {
        cout<< "Your choice of course is BAKING "<<endl<< "This BAKING course, runs for 5 days at a cost of $13,000 "<<endl;
        int accomodation4;
        cout<< "What accomodation would you like to lodge at: "<<endl << "1. Camp house A --> $10,000"<<endl<< "2. Camp house B --> $2,500"<<endl<< "3. Camp house C --> $5,000"<<endl<< "4. Camp house D --> $13,000"<<endl<< "5. Camp house E --> $5,000"<<endl;
        cin>>accomodation4;

        int price41;
        if (accomodation4 ==1 ){
            price41 = campA*day4;
        
            cout<< "Total lodge price: " << price41<<endl;
            srand(time(0));
            int promo41 = rand() % 100;
            int discountprice41 = price41 - (price41 * promo41 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice41<<endl;
            int total41 = discountprice41 + reg4;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: BAKING"<< "      DAYS:"<< day4 <<endl<< "Registration: "<< reg4 << " Random draw: "<< promo41 <<endl<< "TOTAL: "<< total41 <<endl;
        }
        else if (accomodation4 ==2) {
            int price42;
            price42 = campB * day4;

            cout<< "Total lodge price before discount: "<<price42<<endl;
            srand(time(0));
            int promo42 = rand() % 100;
            int discountprice42 = price42 - (price42 * promo42 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice42<<endl;
            int total42 = discountprice42 + reg4;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: BAKING"<< "      DAYS:"<< day4 <<endl<< "Registration: "<< reg4 << " Random draw: "<< promo42 <<endl<< "TOTAL: "<< total42 <<endl;
        }
        else if (accomodation4 ==3) {
            int price43;
            price43 = campC * day4;

            cout<< "Total lodge price before discount: "<<price43<<endl;
            srand(time(0));
            int promo43 = rand() % 100;
            int discountprice43 = price43 - (price43 * promo43 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice43<<endl;
            int total43 = discountprice43 + reg4;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: BAKING"<< "      DAYS:"<< day4 <<endl<< "Registration: "<< reg4 << " Random draw: "<< promo43 <<endl<< "TOTAL: "<< total43 <<endl;
        }
        else if (accomodation4 ==4) {
            int price44;
            price44 = campD * day4;

            cout<< "Total lodge price before discount: "<<price44<<endl;
            srand(time(0));
            int promo44 = rand() % 100;
            int discountprice44 = price44 - (price44 * promo44 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice44<<endl;
            int total44 = discountprice44 + reg4;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: BAKING"<< "      DAYS:"<< day4 <<endl<< "Registration: "<< reg4 << " Random draw: "<< promo44 <<endl<< "TOTAL: "<< total44 <<endl;
        }
        else if (accomodation4==5) {
            int price45;
            price45 = campD * day4;

            cout<< "Total lodge price before discount: "<<price45<<endl;
            srand(time(0));
            int promo45 = rand() % 100;
            int discountprice45 = price45 - (price45 * promo45 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice45<<endl;
            int total45 = discountprice45 + reg4;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: BAKING"<< "      DAYS:"<< day4 <<endl<< "Registration: "<< reg4 << " Random draw: "<< promo45 << "%discount"<< endl<< "TOTAL: "<< total45 <<endl;
        }
        else {cout<< "ERROR";}
     }
     else if (course ==5) {
        cout<< "Your choice of course is Public speaking "<<endl<< "This Public speaking course, runs for 2 days at a cost of $5,000 "<<endl;
        int accomodation5;
        cout<< "What accomodation would you like to lodge at: "<<endl << "1. Camp house A --> $10,000"<<endl<< "2. Camp house B --> $2,500"<<endl<< "3. Camp house C --> $5,000"<<endl<< "4. Camp house D --> $13,000"<<endl<< "5. Camp house E --> $5,000"<<endl;
        cin>>accomodation5;

        int price51;
        if (accomodation5 ==1 ){
            price51 = campA*day4;
        
            cout<< "Total lodge price: " << price51<<endl;
            srand(time(0));
            int promo51 = rand() % 100;
            int discountprice51 = price51 - (price51 * promo51 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice51<<endl;
            int total51 = discountprice51 + reg5;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: Public speaking"<< "      DAYS:"<< day5 <<endl<< "Registration: "<< reg5 << " Random draw: "<< promo51 <<endl<< "TOTAL: "<< total51 <<endl;
        }
        else if (accomodation5 ==2) {
            int price52;
            price52 = campB * day5;

            cout<< "Total lodge price before discount: "<<price52<<endl;
            srand(time(0));
            int promo52 = rand() % 100;
            int discountprice52 = price52 - (price52 * promo52 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice52<<endl;
            int total52 = discountprice52 + reg5;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: Public speaking"<< "      DAYS:"<< day5 <<endl<< "Registration: "<< reg5 << " Random draw: "<< promo52 <<endl<< "TOTAL: "<< total52 <<endl;
        }
        else if (accomodation5 ==3) {
            int price53;
            price53 = campC * day5;

            cout<< "Total lodge price before discount: "<<price53<<endl;
            srand(time(0));
            int promo53 = rand() % 100;
            int discountprice53 = price53 - (price53 * promo53 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice53<<endl;
            int total53 = discountprice53 + reg5;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: Public speaking"<< "      DAYS:"<< day5 <<endl<< "Registration: "<< reg5 << " Random draw: "<< promo53 <<endl<< "TOTAL: "<< total53 <<endl;
        }
        else if (accomodation5 ==4) {
            int price54;
            price54 = campD * day5;

            cout<< "Total lodge price before discount: "<<price54<<endl;
            srand(time(0));
            int promo54 = rand() % 100;
            int discountprice54 = price54 - (price54 * promo54 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice54<<endl;
            int total54 = discountprice54 + reg5;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: Public speaking"<< "      DAYS:"<< day5 <<endl<< "Registration: "<< reg5 << " Random draw: "<< promo54 <<endl<< "TOTAL: "<< total54 <<endl;
        }
        else if (accomodation5==5) {
            int price55;
            price55 = campD * day5;

            cout<< "Total lodge price before discount: "<<price55<<endl;
            srand(time(0));
            int promo55 = rand() % 100;
            int discountprice55 = price55 - (price55 * promo55 / 100);
            cout<< "Subtotal lodge price after discount = "<< discountprice55<<endl;
            int total55 = discountprice55 + reg5;
            cout<< "NAME: " <<name << "     PAU STUDENT: "<< member <<endl << "COURSE: Public speaking"<< "      DAYS:"<< day5 <<endl<< "Registration: "<< reg5 << " Random draw: "<< promo55 << "%discount"<< endl<< "TOTAL: "<< total55 <<endl;
        }
        else {cout<< "ERROR";}
     }
     else {cout<< "invalid input";}
      
        }


    
    

