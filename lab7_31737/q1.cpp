#include <iostream>
using namespace std;

int main(){
    int n,x;
    cout<<"Enter x and n: "<<endl;
    cin>>x>>n;
    double sum=0;
    for (int i = 0; i <= n; i++)
    {
        double numerator=1;
        double denominator=1;
        for (int j = 1; j <= i; j++)
        {
            numerator*=x;
            denominator*=j;
        }
        sum+=numerator/denominator;
    }
    cout<<"The sum is: "<<sum;
    return 0;
    
    
}