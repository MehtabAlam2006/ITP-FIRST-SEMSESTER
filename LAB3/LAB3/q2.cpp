/*Q2. Write a C++ program to find the roots (X1, X2) for the quadratic equation: ax2+bx+c
using the formula: x1,x2 = -b +- sqrt(b^2 -4ac)\2a;
Enter the constants (a, b, c) then check the following points:
1. if a= 0, display the message "Divided by zero".
2. if b2 < 4ac, display the message "No real roots".
3. if b2 = 4ac, display the message "Equal roots" then find the roots from the formula above.
4. if b2 > 4ac, display the message "real roots" then find the roots from the formula above.*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<"enter the co-efficients of your equation in order \n";
    cout<<"a\n";
    cin>>a;
    cout<<"b\n";
    cin>>b;
    cout<<"c\n";
    cin>>c;
   
    if(a==0){
        cout<<"divided by zero\n";
    }
    else if(b*b <4*a*c){
        cout<<"No real roots\n";
    }
    else if((b*b) == (4*a*c)){
        cout<<"Equal roots\n";

    }
    else 
    {
        cout<<"real roots\n";
    }
    double root1 = (-b + sqrt(b*b - 4*a*c) )/2*a;
    double root2 = (-b - sqrt(b*b - 4*a*c)) /2*a;

    cout<<"first root = "<<root1<<endl;
    cout<<"second root = "<<root2;

}