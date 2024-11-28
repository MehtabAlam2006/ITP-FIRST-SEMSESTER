#include <iostream>
using namespace std;

int count7(int n) {
  
    if (n == 0) {
        return 0;
    }
    
    if (n % 10 == 7) {
       
        return 1 + count7(n / 10);
    } else {
        
        return count7(n / 10);
    }
}

int main() {

    cout << "count7(717): " << count7(717) << endl;         
    cout << "count7(7170123): " << count7(7170123) << endl; 
    cout << "count7(7): " << count7(7) << endl;            
    cout << "count7(123): " << count7(123) << endl;         
    cout << "count7(77777): " << count7(77777) << endl;     
    cout << "count7(0): " << count7(0) << endl;     
    cout<<"count7(172727): "<<count7(172727)<<endl;        

    return 0;
}