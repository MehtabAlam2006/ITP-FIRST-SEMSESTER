//mehtab alam
// 31737
#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n; 

    int arr[n]; 

    cout << "Enter the elements of the array (1s and 0s): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        while(arr[i] != 0 && arr[i] != 1){ 
            cout << "Invalid input. Please enter 0 or 1: ";
            cin >> arr[i];
        }
    }

    int maxCount = 0; 
    int currentCount = 0; 

    for(int i = 0; i < n; i++){
        if(arr[i] == 1) currentCount++;
        else currentCount = 0;
        if(currentCount > maxCount) maxCount = currentCount;
    }

    cout << "Maximum number of consecutive 1's: " << maxCount << endl;

    return 0;
}