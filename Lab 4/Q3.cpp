/*3. Write a program that determines whether every digit of a given positive integer is
odd. Print true if the number consists entirely of odd digits (1, 3, 5, 7, 9) and false
if any of its digits are even (0, 2, 4, 6, 8). For example, on input 135319, the output
should be true.
• On input 9145293, the output should be false*/
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter your number\n";
    cin>>number;
while (number !=0){
    int digit = number % 10;
    if(digit % 2 == 0){
        cout<<"false \n";
        
    }
    number=number/10;
}
cout<<"true";
return 0;
}