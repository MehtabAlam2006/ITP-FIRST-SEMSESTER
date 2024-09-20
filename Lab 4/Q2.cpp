/*2. Write a program that, using one for loop and one if statement, prints the integers
from 1000 to 2000 with five integers per line. Only last line may have less than 5
numbers. Hint: use the % operator.*/
#include <iostream>
using namespace std;
int main(){
    for ( int i = 1000; i<=2000; i++ ){
        if((i+1)%5==0){
        cout<<i<<","<<endl;
    }
    else 
    cout<<i<<" ";
}
return 0;
}