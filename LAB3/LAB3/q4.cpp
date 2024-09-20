/*Q4. Lottery Game:
Generate a random three-digit number in the range 100-999. Take 3-digit input from user
and print whether the user wins according to the following criteria:
1). If both the numbers are the same, then the user wins 100000 pkr.
2). If two digit matches in same placement then the user wins 50000 pkr. For example, if the user enters
452 and the random number generated is 252, he wins 50000.
3) If any one digit matches in the same placement the user wins 10000 pkr. For example, if the user enters
789 and random number generated is 383, he wins 10000.*/

#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int a;
    cout<<"enter three digit number\n";
    cin>>a;

    int num1 = (rand() % 900) + 100;
    cout<< num1<<endl;
    int d1,d2,d3;
    d1 = a % 10;
    d2 = (a/10) % 10;
    d3 = (a/100) % 10;
    //cout<<".......digits include in user input........\n";
   // cout<<d1<<endl;
   // cout<<d2<<endl;
   // cout<<d3<<endl;
    int a1,a2,a3;
    //cout<<".......digits include in random generated number.......\n";
    a1=  num1 %10;
    a2 = (num1/10) %10;
    a3 = (num1 /100) %10;

    if(a == num1){
      cout<<"you won 100000 pkr\n";
    }
    else if ((d1 == a1 && d2==a2) || (d2 == a2 && d3 == a3))
    {
      cout<<"you won 50000\n";
    }
    else if (a1 == d1 || a2 == d2 || a3 == d3){
      cout<<"you won 10000 pkr \n";
    }
    else 
    {cout<<"no digit matched";
    }


 return 0;



    }