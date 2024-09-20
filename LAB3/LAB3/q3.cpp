/*
Q3. Write a C++ program to find and print T from the below equations where a and b are
input variables.
T = a^2 + ab +sqrt(ab) condition ( a<b and a<10)
T = ab^2 -2a +5b  condition ( a = b or b>10)

Hint: For power u can use pow(double base, double exponent);
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cout<<"enter th value fro a and b\n";
    cout<<"a\n";
    cin>>a;
    cout<<"b\n";
    cin>>b;
    if ( a<b && a<10 ){
        cout<< a*a + a*b + sqrt(a*b);
    }
    else if (a == b || b>10){
        cout<<a*b*b - 2*a + 5*b;
    }
    else 
    {
        cout<<"try again";
    }
}