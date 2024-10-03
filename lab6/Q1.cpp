//mehtab alam
//31737

/*1. Write a program that read int values from input, put them in an array, and print the count
of even integers in the array. Hint: First ask user the number of values n, and then in a
loop read n values. You may assume that n ≤ 50.
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of values (n): ";
    cin >> n; 

    int arr[50]; 
    cout << "Enter " << n << " values: " << endl;

    for(int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    }

    int evenCount = 0; 
    for(int i = 0; i < n; i++){ 
        if(arr[i] % 2 == 0){
            evenCount++; 
        }
    }

    cout << "Count of even integers: " << evenCount << endl; 

    return 0;
}