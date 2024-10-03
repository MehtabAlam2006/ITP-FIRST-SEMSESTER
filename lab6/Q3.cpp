//mehtab alam
//31737

#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the number of elements in the array: ";
    cin >> n; 

    string arr[n]; 

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // reverse  array
    int start = 0;
    int end = n - 1;
    while(start < end){
        string temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}