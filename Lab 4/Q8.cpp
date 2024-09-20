#include<iostream>
using namespace std;
int main(){
    int num1, sum;
    cout<<" enter a number\n";
    cin>>num1;
    do{
        sum = sum + num1;
         cout<<" enter a number\n";
    cin>>num1;
    }
    while(num1>=0);
    cout<<sum;
}