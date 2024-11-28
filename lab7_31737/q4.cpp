#include <iostream>
using namespace std;

int main(){
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};    

    int i=0;
    int j=0;
    int di=1;

    while (i<size(arr)){
        cout<<arr[i][j]<<" ";
        j+=di;
        if (j<0 || j>size(arr[i])-1){
            j-=di;      
            di*=-1; 
            i+=1;       
        }
    }
    return 0;
}