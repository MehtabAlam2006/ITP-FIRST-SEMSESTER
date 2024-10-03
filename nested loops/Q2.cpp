/*2. Guessing game: Generate a random number between 1 and 100. Ask the user to guess the number.
Provide feedback (too high, too low) and continue until the user guesses correctly. Use a loop for
repetition.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
srand(time(0));
int random = rand() % 99 + 1;
cout<<random<<endl;
int n;
cout<<"enter value your number between 1-100: "<<endl;
cin>>n;
while(random!=n){

if (n>random)
{
    cout<<"to high"<<endl;
}
if (n<random)
{
    cout<<"to low"<<endl;
}
cout<<"enter again";
cin>>n;
}
cout<<"you number is equal to random number....";
}