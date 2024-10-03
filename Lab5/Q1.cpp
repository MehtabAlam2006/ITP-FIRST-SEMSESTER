/*1. Write a program five_per_line.cpp that, using one for loop and one if statement, prints the integers
from 1000 to 2000 with five integers per line. Only last line may have less than 5 numbers.
Hint: use the % operator to determine when to print a newline character*/
// five_per_line.cpp
#include <iostream>
using namespace std;
int main() {
    for (int i = 1000; i <= 2000; i++) {
        cout << i << " ";
        if ((i - 1000) % 5 == 4) {
            cout<<endl;
        }
    }
    return 0;
}
