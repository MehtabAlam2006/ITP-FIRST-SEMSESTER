#include <iostream>
using namespace std;

int* concatenateArrays(int arr1[], int size1, int arr2[], int size2) {
    
    static int result[6];
    
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

   
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i];
    }

    return result;
}

int main() {
    int a1[3] = {1, 2, 3};
    int a2[3] = {4, 5, 6};

   
    int* concatenatedArray = concatenateArrays(a1, 3, a2, 3);

    
    cout << "Concatenated Array: ";
    for (int i = 0; i < 6; i++) {
        cout << concatenatedArray[i] << " ";
    }
    cout << endl;

    return 0;
}