/*
3. Write a program that dynamically allocates memory for two strings entered by the user. 
Concatenate the two strings into a dynamically allocated result string and display it. 
Free all allocated memory after use. 
*/

#include <iostream> 
#include <cstring> 
using namespace std;

int main() { 
    
    char* array1 = new char[100];
    char* array = new char[100];
    cout<<"enter  your 1st string: "<<endl;
   cin.getline(array1,100);
    cout<<"enter  your 2nd string: "<<endl;
   cin.getline(array,100);
    
    char* result = new char[strlen(array1) + strlen(array) + 1 ];

    strcpy(result,array1);
    strcat(result,array);
    cout<<"concatenated string: "<< result <<endl;

    delete[] result;
    delete[] array;
    delete[] array1;
    return 0;
}

