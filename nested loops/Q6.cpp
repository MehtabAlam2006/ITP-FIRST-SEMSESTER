/*6. Write a program that takes an input n and use nested for loops to produce the following output (n = 4
in the example below):
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the highest number: "<<endl;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<j*i<<" ";
        }
        cout<<"\n";
    }
}