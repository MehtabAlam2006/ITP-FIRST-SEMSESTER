
/*Q5. Take input “n” from user and print the following using goto statement:
• Number from 1 till n
• Sum of the numbers from 1 till n */
#include <iostream>
using namespace std;
int main ()
{
int n, sum = 0;
cout<<"enter value for n: \n";
cin>>n;
int i = 0 ;
b:
cout<<i<<" "<<endl;
i++;
sum = sum +i;
if (i == n){
    cout<<sum;
    return 0;
    
}
goto b;
}