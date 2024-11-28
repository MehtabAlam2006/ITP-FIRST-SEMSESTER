#include <iostream>
using namespace std;

int main(){
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int counter=0;
    int divider=1;
    while ((n/divider)%10!=0){
        counter+=1;
        divider*=10;
    }

    cout<<"there are "<<counter<<" digits.";
    return 0;
}