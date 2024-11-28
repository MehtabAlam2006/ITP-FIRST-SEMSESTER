#include <iostream>
using namespace std;

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    bool b=true;
    for(int i=1;i<(n+1)/2;i++){
        if (n%i==0){
            b=false;
            break;
        }
    }
    if(b){
        cout<<"the number is prime";
    }else{
        cout<<"the number is not prime";
    }
    return 0;
}