//mehtab alam
//31737
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    string deck[4][13];
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" ,"Ace"};

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck[i][j] = suits[i] + " " + ranks[j];
        }
    }

    // initial deck
    cout << "Initial Deck:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cout << deck[i][j] << endl;
        }
        cout << endl;
    }

    // Shuffle 
    srand(time(0)); 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            int randomRow = rand() % 4;
            int randomCol = rand() % 13;
            string temp = deck[i][j];
            deck[i][j] = deck[randomRow][randomCol];
            deck[randomRow][randomCol] = temp;
        }
    }

    
    cout << "Shuffled Deck:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            cout << deck[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}