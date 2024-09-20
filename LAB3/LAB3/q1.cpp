/*Q1. Write a C++ program to enter a character represent the person gender (M: for male, F:
for female) and a number represents person length ((L) in inch) then find and print its
perfect weight ((W) in pound) according to the following relations:
For male (M) : W = (L × 4) - 125
For female (F): W = (L × 3.5) – 108*/
#include<iostream>
using namespace std;

int main(){
    char Gender;
    float Length;
    cout<<"What is your Gender? M/F\n";
    cin>>Gender;
    cout<<"what is your length in inches?\n";
    cin>>Length;
    if (Gender == 'M'){
        cout<<"Your perfect weight is: "<<(Length * 4) - 125;
    }
    else 
    {
        cout<<"Your perfect weight is: "<<(Length * 3.5) - 125;
    }
    return 0;
}