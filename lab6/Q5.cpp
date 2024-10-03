// mehtab alam
// 31737

#include<iostream>
using namespace std;

int main(){
    int matrix[3][3]; 

    cout << "Enter the elements of the 3x3 matrix: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }

   
    int totalSum = 0;
    for(int i = 0; i < 3; i++){
        int rowSum = 0, colSum = 0;
        for(int j = 0; j < 3; j++){
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
            totalSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
        cout << "Column " << i + 1 << ": " << colSum << endl;
    }

    cout << "Total sum of all elements: " << totalSum << endl;

    return 0;
}