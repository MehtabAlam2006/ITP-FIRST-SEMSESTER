#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {0,9,0,1}};    //given matrix

    
    for(int i=0;i<size(a);i++){
        bool b=false;
        for(int j=0;j<size(a[i]);j++){
            if (a[i][j]==0){
                for(int k=0;k<size(a);k++){
                    if (a[k][j]!=0){
                        a[k][j]=sqrt(-1);     //columns
                    }
                }
                for(int k=0;k<size(a[i]);k++){
                    if (a[i][k]!=0){
                        a[i][k]=sqrt(-1);     //rows
                    }    
                }
            }
        }
    }

    for(int i=0;i<size(a);i++){
        for(int j=0;j<size(a[i]);j++){
            if (a[i][j]==(int)sqrt(-1)){
                a[i][j]=0;  //make sqrt(-1) back into 0
            }
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}