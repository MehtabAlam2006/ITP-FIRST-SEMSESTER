/*1. Write a program that takes one integer input n from the user and prints out n!, where 0! = 1 and for
 n ≥1,
 n! = n×(n−1)×(n−2)×···×2×1
 Handle the input/output in main() function and to compute the factorial, write a function that has the
 following signature:
 long long factorial(long long n)
 What is the largest value of n that your function can handle without overflow?*/
 // my code can calculate factorial upto 20 without any error.
 
#include <iostream>
using namespace std;

// computing 
long long factorial(long long n) {
    if (n == 0) {
        return 1; // 0! = 1
    }
    long long result = 1;
    for (long long i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
// managing 
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    // Checking  for negative input
    if (n < 0) {
        cout << "Factorial is not defined for negative integers." << endl;
        return 1;
    }

   long long fact = factorial(n);
   cout << n << "! = " << fact << endl;

    return 0;
}