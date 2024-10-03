/*3. Write a program star_square.cpp that take input n and use nested for loops to produce the following
n-by-n square pattern using these 5 color combination (n = 5 in the example below):
* * * * * red
* * * * * blue
* * * * * green
* * * * * yellow
* * * * * black
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of rows? "<<endl;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
      switch(i%5){
         case 1:
         cout<<"\033[31m";
         break;
         case 2:
         cout<<"\033[34m";
         break;
         case 3:
         cout<<"\033[32m";
         break;
         case 4:
         cout<<"\033[33m";
         break;
         default:
         cout<<"\033[37m";

      }

         for(int j = 1; j<=n; j++ ){
            cout<<" * ";
         }
         cout<<"\n";
    }
   

}
