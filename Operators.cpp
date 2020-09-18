# include <iostream>

using namespace std;
//relational operators

main()
{
    int minVal, valueToCheck, maxVal;
    bool isGreaterEqualMinNumber, isLowerEqualMaxNumber;

    cout << "Minimum value: ";
    cin >> minVal;
    cout << "Maximum value: ";
    cin >> maxVal;
    cout << "Value to check: ";
    cin >> valueToCheck;

    isGreaterEqualMinNumber = (valueToCheck >= minVal);
    isLowerEqualMaxNumber = (valueToCheck <= maxVal);

    cout << "Is the value " << valueToCheck << " greater ot equal to " << minVal << " ? " << isGreaterEqualMinNumber << endl;
    cout << "Is the value " << valueToCheck << " lower ot equal to " << maxVal << " ? " << isLowerEqualMaxNumber << endl;

    system ("pause");

}
