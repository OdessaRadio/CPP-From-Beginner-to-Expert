# include <iostream>

using namespace std;


main()
{
    //Ex.1

    int minVal, valueToCheck, maxVal;
    //bool isGreaterEqualMinNumber, isLowerEqualMaxNumber;
    bool isWithinInterval;

    cout << "Minimum value: ";
    cin >> minVal;
    cout << "Maximum value: ";
    cin >> maxVal;
    cout << "Value to check: ";
    cin >> valueToCheck;

    //isGreaterEqualMinNumber = (valueToCheck >= minVal);
    //isLowerEqualMaxNumber = (valueToCheck <= maxVal);
    isWithinInterval = (valueToCheck >= minVal) && (valueToCheck <= maxVal);

    cout << "Is the value " << valueToCheck << " contained in the interval from " << minVal <<
            " to " << maxVal << " ? " << isWithinInterval << endl ;
    //cout << "Is the value " << valueToCheck << " lower ot equal to " << maxVal << " ? " << isLowerEqualMaxNumber << endl;
    system ("pause");

}
