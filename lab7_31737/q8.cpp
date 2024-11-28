#include <iostream>
using namespace std;

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int term=1;
    int p1term=0;
    int p2term=0;
    cout<<0<<" ";
    for(int i=0;i<n-1;i++){
        cout<<term<<" ";
        p2term=p1term;
        p1term=term;
        term=p1term+p2term;
    }
    return 0;
}