#include <iostream>
#include <vector>
using namespace std;

double maxSpan(vector<int> v){
    int mspan=1;
    for (int i=0;i<v.size();i++){
        for (int j=v.size();j>i;j--){
            if (v[i]==v[j] && j-i>mspan){
                mspan=j-i+1;
            }
        }
    }
    return mspan;
}

int main() {
    vector<int> v1 = {1, 2, 1, 1, 3};
    cout << maxSpan(v1)<<endl; // should prints 4

    vector<int> v2 = {1, 4, 2, 1, 4, 1, 4};
    cout << maxSpan(v2)<<endl; // should prints 6

    vector<int> v3 = {1, 4, 2, 1, 4, 4, 4};
    cout << maxSpan(v3)<<endl; // should prints 6

}
