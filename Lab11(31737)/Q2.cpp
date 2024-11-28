/*
2. Create a program that uses dynamic memory allocation to create a 2D array (matrix). 
Take the number of rows and columns as input from the user, populate the matrix with 
random numbers, print the matrix, and then deallocate the memory.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main (){
    int rows,cols;
    srand(static_cast<unsigned int>(time(0)));

    cout<<" enter number of rows:  "<<endl;
    cin>>rows;
    cout<<" enter number of cols:  "<<endl;
    cin>>cols;

    // 2D array
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
       matrix[i] = new int[cols];
    }

   // populate the array 
    for (int i = 0; i < rows; ++i) {
       for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100; // random number
        }
    }

 // new matrix
    cout << "The new matrix is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }



   // dellocation the new array
        for (int i = 0; i < rows; ++i) {
              delete[] matrix[i]; // Delete each row
              }
       delete[] matrix; // Delete the array of pointers

    return 0; 


}
