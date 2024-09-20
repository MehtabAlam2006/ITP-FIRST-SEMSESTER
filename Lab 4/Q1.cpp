/*1. Guessing game: Generate a random number between 1 and 100. Ask the user to
guess the number. Provide feedback (too high, too low) and continue until the
user guesses correctly. Use a do while loop for repetition.*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int num1 = (rand() % 100) + 1;
    int number;
    cout<<num1<<endl;
    do {
        cout<<"guess the number between 1- 100\n";
    cin>>number;
        if(num1>number){
            cout<<"to low\n";
        }
        else if (num1<number)
        {cout<<"to high\n";
        }
        else 
        {
            cout<<"congrtulations number matched\n";
        }
    }
while ( num1 != number);


return 0;
}



