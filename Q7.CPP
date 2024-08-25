/*7. Write a program that demonstrates the use of `\r` (carriage return) by first printing "Typing..." and then
overwriting it with any statement (like “Welcome to IBA”) on the same line.
Output Workflow:
• Print " Typing..."
• Use `\r` to move the cursor to the beginning of the line
• Print “Welcome to IBA” to overwrite "Typing..."
• Your final output should be “Welcome to IBA”*/
#include<iostream>
using namespace std;

int main(){
    cout<<"Typing...... \r"<<"welcome to IBA!";
    return 0;
}