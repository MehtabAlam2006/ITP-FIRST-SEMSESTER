#include <iostream>
#include <vector>
using namespace std;

double percent_even(vector<int> v) {
    if (v.empty()) {
        return 0.0; 
    }

    int even_count = 0;

    for (int num : v) {
        if (num % 2 == 0) {
            even_count++;
        }
    }


    double percentage = (static_cast<double>(even_count) / v.size()) * 100.0;

    return percentage; 
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> v(n); 

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    double result = percent_even(v); 
    cout << "The percentage of even numbers in the vector is: " << result << "%" << endl;

    return 0;
}