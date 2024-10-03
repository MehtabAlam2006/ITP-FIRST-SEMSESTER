//mehtab alam
//31737

/*2.Write a program that given an array of real numbers prints true if the list is in sorted in
ascending order and false otherwise. For example, if arrays store {16.1, 12.3, 22.2, 14.4}
and {1.5, 4.3, 7.0, 19.5, 25.1, 46.2} respectively, your program should print false and true
respectively. Assume the array has at least one element. A one-element array is
considered to be sorted.
*/
#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the number of values (n): ";
    cin >> n; 

    double arr[50]; 
    cout << "Enter " << n << " values: " << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
    }

    bool Sorted = true; 
    for(int i = 0; i < n - 1; i++){ 
        if(arr[i] > arr[i + 1]){ 
            Sorted = false; 
            break; 
        }
    }

    cout << "Is the array sorted? " << (Sorted ? "true" : "false") << endl;

    return 0;
}