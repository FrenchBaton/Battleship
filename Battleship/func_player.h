#include <iostream>
#include "structures.h"
using namespace std;

Position getPosition()
{
    Position pos;

    cout << "Enter row (0-9): ";
    cin >> pos.row;

    cout << "Enter column (0-9): ";
    cin >> pos.col;

    int rotation;

    cout << "Horizontal placement? (1 - yes, 0 - no): ";
    cin >> rotation;

    pos.horizontal = (rotation == 1);

    return pos;
}

int chooseShip()
{
    int shipNumber;

    cout << "Choose a ship:" << endl;
    cout << "1 - One-deck ship" << endl;
    cout << "2 - Two-deck ship" << endl;
    cout << "3 - Three-deck ship" << endl;
    cout << "4 - Four-deck ship" << endl;
    cout << "Your choice: ";

    cin >> shipNumber;

    while (shipNumber < 1 || shipNumber > 4)
    {
        cout << "Invalid choice. Enter a number from 1 to 4: ";
        cin >> shipNumber;
    }

    return shipNumber;
}