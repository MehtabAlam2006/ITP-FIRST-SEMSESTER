/*6. Write a C++ program that uses a while loop to calculate the factorial of a given
number n (where n is input by the user).
Hint: n factorial is n*n-1*n-2 ...*1.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a postive integer: \n";
    cin>>num;
    long long factorial = 1;
    int i = 1;
    while(i<=num){
         factorial *= i;
        i++;
    }
    cout<<" factorial of "<<num<<"="<<factorial;
    return 0;
}