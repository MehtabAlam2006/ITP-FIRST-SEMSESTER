/*. Multiplication Table: Create a program that generates the multiplication table for
a given integer n up to 10. Use a while loop for the multiplication and display the
result.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an interger to find its multiplication table\n";
    cin>>n;
    int i = 1;
    while ( i<=10){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }
    return 0;
}