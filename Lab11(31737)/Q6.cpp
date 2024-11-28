#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* n = new char[100];
    
    cout << "Enter your string: " << endl;
    cin.getline(n, 100);
    
  
    int length = strlen(n);
    
    
    bool isPalindrome = true;

    
    for (int i = 0; i < length / 2; ++i) {
        if (n[i] != n[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    
    if (isPalindrome) {
        cout << "\"" << n << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << n << "\" is not a palindrome." << endl;
    }

    
    delete[] n;

    return 0;
}