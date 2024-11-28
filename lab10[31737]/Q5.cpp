#include <iostream>
using namespace std;

void towerOfHanoi(int n, char base, char destinition, char aux)
{
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, base, aux, destinition);
    cout << "Move disk " << n << " from rod " << base
         << " to rod " << destinition << endl;
    towerOfHanoi(n - 1, aux, destinition, base);
}

int main()
{
    int N = 3;

    towerOfHanoi(N, 'A', 'C', 'B');
    return 0;
}


