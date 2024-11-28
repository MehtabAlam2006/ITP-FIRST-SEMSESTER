#include <iostream>
#include <vector>
using namespace std;

bool canBalance(vector<int> v){
    int sum1=0;
    for(int i=0;i<v.size();i++){
        sum1+=v[i];      //find sum of vector
    }

    int sum2=0;
    for(int i=0;sum2<sum1;i++){
        sum1-=v[i];
        sum2+=v[i];
    }

    if (sum1==sum2){    //check if the sum could ever get equal
        return true;   
    }
    return false;
}

int main() {
    vector<int> v = {1, 1, 1, 2, 1};
    cout<<boolalpha<<canBalance(v)<<endl;

    v = {2, 1, 1, 2, 1};
    cout<<boolalpha<<canBalance(v)<<endl;

    v = {10, 10};
    cout<<boolalpha<<canBalance(v)<<endl;

    return 0;

}