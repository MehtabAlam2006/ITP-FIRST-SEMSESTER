/*4. Write a program star_triangle.cpp that takes an input n and use nested for loops to produce the
following output (n = 5 in the example below):
        *
      * *
    * * *
  * * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"number of rows? "<<endl;
    cin>>n;
    for(int i = 1; i<=n ; i++){
     for(int d = n-i; d>=1; d--){
        cout<<"  ";
     }
        for(int j =1; j<=i; j++){
            cout<<" *";
        }
        cout<<"\n";
    }

}