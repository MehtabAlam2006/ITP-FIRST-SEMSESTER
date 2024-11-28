/*3. Write a function with signature ‘int count_vowels(string s)’ that given a string, returns the count of the
 occurrences of vowels in the string.*/
 #include <iostream>
#include <string> 
using namespace std;

int count_vowels(string s) {
    int count = 0; 

    // checking case sensitivity
    for (char c : s) {
        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++; 
        }
    }

    return count; // Return the total count of vowels
}

int main() {
    string n;
    cout << "Enter your string: " << endl;
    getline(cin, n);

    int result = count_vowels(n); 
    cout << "The number of vowels in the string is: " << result << endl;

    return 0; 
}