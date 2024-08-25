/*5. Write a C++ program that initializes two integer variables representing the length and width of a
rectangle. The program should then calculate the area of the rectangle and print a message in the format:
"The area of the rectangle is [Area] square units."*/
#include<iostream>
using namespace std;
int main(){
    int length = 60;
    int width  = 50;
    int area   = length*width;
    cout<<"The area of the rectangle is "<< area <<"square units.\n";
    return 0;
}