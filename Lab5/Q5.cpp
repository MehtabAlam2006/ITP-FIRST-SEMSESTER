/*5. Write a program that takes an input n and use nested for loops to produce the following output (n = 5
in the example below):
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the highest number: "<<endl;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
