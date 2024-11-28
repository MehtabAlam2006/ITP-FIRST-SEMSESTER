/* 2. Write a function with signature ‘int count7(int n)’ that given a non-negative integer n, returns the count
 of the occurrences of 7 as a digit, so for example count7(717) yields 2. Following are some more examples
 • count7(7170123) should return 2
 • count7(7) should return 1
 • count7(123) should returns 0
 Hint: Note that mod (%) by 10 yields the rightmost digit (126%10 is 6), while divide (/) by 10 removes
 the rightmost digit (126/10 is 12)
 */

#include <iostream>
using namespace std;

// Function to count occurrences of the digit 7
int count7(int n) {
    int count = 0; 

    
    while (n > 0) {
        int digit = n % 10; 
        if (digit == 7) {
            count++; 
        }
        n = n / 10; 
    }

    return count; 
}

int main() {
    int n;
    cout << "Enter a non-negative number n: " << endl;
    cin >> n;

    
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit with an error code
    }

    int result = count7(n); 
    cout << "The number of occurrences of 7 in " << n << " is: " << result << endl;

    return 0; 
}