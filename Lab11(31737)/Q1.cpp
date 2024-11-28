/*
1. Write a program that dynamically allocates memory for an array of n integers, where n is 
provided by the user. Populate the array with values entered by the user, calculate the 
sum of the array elements, and deallocate the memory. */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"how many elements youi want in your array? \n";
    cin>>n;
    cout<<"your array size is: "<<n<<endl;
    
int* array = new int[n]; // dynamically allocation

cout << "Enter " << n << " integers:" <<endl;
for(int i = 0; i<n; i ++){
    cin>>array[i];   
}


// submission of array elements

int sum=0;
for(int i= 0 ; i<n; ++i ){
sum+=array[i];
}


cout<<"The sum of array elements are: "<<sum<<endl;

delete[] array;
return 0;

}