#include <iostream>
#include <vector>
using namespace std;

bool vector_eq(vector<int> v1, vector<int> v2){
    if (v1.size()!=v2.size()){
        return false;
    }
    for(int i=0; i<v1.size();i++){
        if (v1[i]!=v2[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> v1 = {1, 2, 1, 1, 3, 5};
    vector<int> v2 = {1, 4, 2, 1, 4};
    cout<<boolalpha<<vector_eq(v1,v2)<<endl;

    v1 = {1, 2, 1, 1, 3};
    v2 = {1, 2, 1, 1, 3};
    cout<<boolalpha<<vector_eq(v1,v2)<<endl;

}