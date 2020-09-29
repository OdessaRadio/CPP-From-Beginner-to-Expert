#include <iostream>

using namespace std;

//Nested loops
main ()
{
//Ex.1
//Setting up an array
    char array[3][3];
    char value = '1';
    int xCoord, yCoord;
    bool symbol = true;
    char playerMark;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            array[i][j] = value;
            value++;
        }
//Ex.2
while (true)
    {
        if (symbol)
        {
            playerMark = 'X';
        }
        else
        {
            playerMark = 'O';
        }

        //Printing part
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout.width(3);
                cout << array[i][j];
            }
            cout << endl << endl;
        }

        do
        {
            cout << "Select X for " << playerMark << " ";
            cin >> xCoord;
            cout << "Select Y for " << playerMark << " ";
            cin >> yCoord;
        } while ((xCoord >= 4)&&(yCoord >= 4));

        if ((array[yCoord-1][xCoord-1] != 'X') && (array[yCoord-1][xCoord-1] != 'O'))
            {
            array[yCoord-1][xCoord-1] = playerMark;

            }
        system ("cls");
        symbol = !symbol;
    }
}
