// \ File		Main.cpp
// \ Author		Stella
// \ Projekt	w3_03

#include <iostream>
using namespace std;

int main() 
{

    bool ships[5][5] = {
      { 0, 1, 1, 0, 0},
      { 0, 0, 0, 0, 1},
      { 0, 0, 1, 0, 0},
      { 0, 0, 1, 0, 0},
      { 1, 0, 0, 1, 0},
    
    };

    int hits = 0;
    int numberOfTurns = 0;

    while (hits < 7) {
        int row, column;

        cout << "Selecting coordinates\n";

        cout << "Please choose a row number between 0 and 6: ";
        cin >> row;

        cout << "Please choose a column number between 0 and 6: ";
        cin >> column;

        if (ships[row][column]) {
           
            ships[row][column] = 0;

            hits++;

            cout << "Hit! " << (7 - hits) << " left.\n\n";
        }
        else {
          
            cout << "Miss\n\n";
        }

        
        numberOfTurns++;
    }

    cout << "Congratulation!\n";
    cout << "You won in " << numberOfTurns << " turns";

    return 0;
}