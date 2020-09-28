# include <iostream>

using namespace std;

//ARRAYS
//Ex.1
main()
{
    int x,y;
    int wArray[3][4] = {{1,  2,  3,  4},
                        {5,  6,  7,  9},
                        {10, 11, 12, 14}};

    cout << "Please, set the position of the element to show x,y" << endl;;
    cout << "Set x position: ";
    cin >> x;
    cout << "Set y position: ";
    cin >> y;

    cout << "Selected array value is: " << wArray[x-1][y-1] << endl;

}
