#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int rows, cols;
    srand(static_cast<unsigned int>(time(nullptr)));

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of cols: ";
    cin >> cols;

    // Dynamically allocate 2D array 
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }

    // Populate the array with random numbers
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100; 
        }
    }

    // initial  matrix
    cout << "The original matrix is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Dynamically allocate the transposed matrix
    int** transposedMatrix = new int*[cols];
    for (int i = 0; i < cols; ++i) {
        transposedMatrix[i] = new int[rows];
    }

    // transpose
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the original matrix
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i]; 
    }
    delete[] matrix; 
    matrix = NULL;

    // Deallocate the transposed matrix
    for (int i = 0; i < cols; ++i) {
        delete[] transposedMatrix[i]; 
    }
    delete[] transposedMatrix; 
    transposedMatrix = NULL;

    return 0;
}