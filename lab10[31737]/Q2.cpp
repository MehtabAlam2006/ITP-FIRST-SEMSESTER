#include <iostream>
using namespace std;

void swapElements(int* a, int* b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main() {
   
    int array[] = {10, 20, 30, 40, 50};

    cout << "Array before swap: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    swapElements(&array[1], &array[3]); 

    cout << "Array after swap: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
