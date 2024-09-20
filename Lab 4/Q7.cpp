/*Write a C++ program that uses a do-while loop to display a calculator menu with
options to perform basic tasks (add, subtract, multiply, divide). The loop should
keep showing the menu until the user chooses to exit. Account for 0 division
error and print a suitable message*/
#include <iostream>
using namespace std;
int main(){
int choice;
double num1 , num2;
do{
    cout<<".....calcultor menu........\n";
    cout<<" 1. Addition \n";
    cout<<" 2. Subtraction \n";
    cout<<" 3. multiplication \n";
    cout<<" 4. Division \n";
    cout<<" 5. Exit \n";
    cout<<"Enter your choice\n";
    cin>>choice;
    if(choice == 5){
        cout<<"exiting calculator ....... Good bye\n";
        break;
    }
    cout<<"enter first number\n";
    cin>>num1;
    cout<<"enter second number\n";
    cin>>num2;
    switch(choice){
        case 1:
        cout<<"Addition = "<< num1 + num2;
        case 2:
        cout<<" Subtraction = "<< num1-num2;
        case 3:
        cout<<" Multiplication = "<< num1 * num2;
        case 4: 
        if(num2 != 0){
        cout<<"Division = "<<num1 / num2;
    }
    else 
    { cout<<" divison error\n";
    }
    default: 
    cout<<"invalid choice\n";
 
    }

}
    while (choice!=5);
    return 0;
}