#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Enter k: ";
    int k;
    cin>>k;
    for(int i=0; i<k;i++){      
        int temp= arr[size(arr)-1];    
        for(int i=size(arr)-2;i>=0;i--){
            arr[i+1]=arr[i];    
        }
        arr[0]=temp;    
            }

    for(int i=0; i<size(arr);i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}