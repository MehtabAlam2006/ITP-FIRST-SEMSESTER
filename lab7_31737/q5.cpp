#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,2,1};
    bool b=true;
    for(int i =0; i<(size(arr)+1)/2;i++){
        if (arr[i]!=arr[size(arr)-i-1]){
            b=false;
            break;
        }
    }

    if(b){
        cout<<"Is palidrome";
    }else{
        cout<<"Is not palidrome";
    }
    return 0;
}