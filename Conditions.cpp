# include <iostream>

using namespace std;


main()
{
//Ex.1
    /*
    int minVal, valueToCheck, maxVal;
    //bool isGreaterEqualMinNumber, isLowerEqualMaxNumber;
    bool isWithinInterval;

    cout << "Minimum value: ";
    cin >> minVal;
    cout << "Maximum value: ";
    cin >> maxVal;
    cout << "Value to check: ";
    cin >> valueToCheck;

    if (valueToCheck >= minVal && valueToCheck <= maxVal)
    {
        cout << "The number " << valueToCheck << " belongs to the interval from " << minVal << " to "
            << maxVal << endl;
    }
    else
    {
        cout << "The number " << valueToCheck << " doesn't belong to the interval from " << minVal << " to "
            << maxVal << endl;
    }

    system ("pause");
    */

//Ex. 2
    /*
    int minVal, valueToCheck, maxVal;
    //bool isGreaterEqualMinNumber, isLowerEqualMaxNumber;
    bool isWithinInterval;

    cout << "Minimum value: ";
    cin >> minVal;
    cout << "Maximum value: ";
    cin >> maxVal;

    if (maxVal > minVal)
    {
        cout << "Value to check: ";
        cin >> valueToCheck;

        bool isContained = (valueToCheck >= minVal) && (valueToCheck <= maxVal);

        if (isContained)
        {
            cout << "The number " << valueToCheck << " belongs to the interval from " << minVal << " to "
                << maxVal << endl;
        }
        else
        {
            cout << "The number " << valueToCheck << " doesn't belong to the interval from " << minVal << " to "
                << maxVal << endl;
        }

    }
    else
    {
        cout << "Error. Maximum value cannot be lower than the minimum value" << endl;
    }
    */

//Ex. 3
    int productSelection;

    cout << "Select the product: input appropriate number." << endl;
    cout << "1. Cola" << endl;
    cout << "2. Pepsi" << endl;
    cout << "3. Fanta" << endl;
    cout << "4. Sprite" << endl;
    cout << "5. Mirinda" << endl;
    cout << "6. 7Up" << endl;

    cin >> productSelection;

    if (productSelection == 1)
    {
        cout << "Your have chosen a Cola" << endl;
    }
    else if (productSelection == 2)
    {
        cout << "Your have chosen a Pepsi" << endl;
    }
    else if (productSelection == 3)
    {
        cout << "Your have chosen a Fanta" << endl;
    }
    else if (productSelection == 4)
    {
        cout << "Your have chosen a Sprite" << endl;
    }
    else if (productSelection == 5)
    {
        cout << "Your have chosen a Mirinda" << endl;
    }
    else if (productSelection == 6)
    {
        cout << "Your have chosen a 7Up" << endl;
    }
    else
    {
        cout << "Error. Invalid choice." << endl;
    }
}
