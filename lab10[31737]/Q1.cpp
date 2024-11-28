#include <iostream>
#include <algorithm>
using namespace std;

int* maxInEachRow(int aray[4][4]) {
    static int array[4]; 
    for (int i = 0; i < 4; i++) {
        array[i] = *max_element(aray[i], aray[i] + 4); 
    }
    return array;
}

int main() {
    int array[4][4] = { {3, 5, 7, 2}, 
                        {1, 6, 4, 8},
                        {9, 2, 3, 5}, 
                        {4, 8, 1, 7} };
    
    int* maxArray = maxInEachRow(array); 
    
    cout << "Greatest elements are: ";
    for (int i = 0; i < 4; i++) {
        cout << maxArray[i] << " "; 
    }
    cout << endl;

    return 0;
}
