/*Q6. Write a program that asks the user to enter a month(1-12) and year and then displays the
number of days in that month using switch case. Account for leap years for February. You
are allowed to use if/else, ternary operator to check for leap years.*/
#include<iostream>
using namespace std;

int main(){
    int month;
    int year;
    cout<<"enter the year\n";
    cin>>year;
    cout<<"enter the month\n";
    cin>>month;
    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout<<"this month has 31 days\n";
    case 4:
    case 6:
    case 9:
    case 11:
    cout<<"this motn has 30 days\n";
    case 2:
    if (year % 4 == 0 || year % 400 == 0)
    cout<<"leap year and this month has 29 days \n";
    else 
    cout<<" not a leap year and 28 days\n";}
    return 0 ;

}