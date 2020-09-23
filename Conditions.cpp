# include <iostream>

using namespace std;


main()
{
//Ex. 1
/*
    int productSelection;

    cout << "Select the product: input appropriate number." << endl;
    cout << "1. Cola" << endl;
    cout << "2. Pepsi" << endl;
    cout << "3. Fanta" << endl;
    cout << "4. Sprite" << endl;
    cout << "5. Mirinda" << endl;
    cout << "6. 7Up" << endl;

    cin >> productSelection;

    switch (productSelection)
    {
    case (1):
        cout << "Your have chosen a Cola" << endl;
        break;
    case (2):
        cout << "Your have chosen a Pepsi" << endl;
        break;
    case (3):
        cout << "Your have chosen a Fanta" << endl;
        break;
    case (4):
        cout << "Your have chosen a Sprite" << endl;
        break;
    case (5):
        cout << "Your have chosen a Mirinda" << endl;
        break;
    case (6):
        cout << "Your have chosen a 7Up" << endl;
        break;
    default:
        cout << "Error. Invalid choice." << endl;

    }
*/

//Ex.2

    // 1 Jan 31
    // 3 Mar 31
    // 5 May 31
    // 7 Jul 31
    // 8 Aug 31
    // 10 Oct 31
    // 12 Dec 31


    // 2 Feb 28(29)

    // 4 Apr 30
    // 6 Jun 30
    // 9 Sep 30
    // 11 Nov 30


    int monthNumber;

    cout << "Enter the number of the month" << endl;

    cin >> monthNumber;

    switch (monthNumber)
    {
        case (1):
        case (3):
        case (5):
        case (7):
        case (8):
        case (10):
        case (12):
            cout << "This month has 31 days." << endl;
            break;

        case (4):
        case (6):
        case (9):
        case (11):
            cout << "This month has 30 days." << endl;
            break;

        case (2): //The check of the input year  for being a leap year
            {
            int year_Selection;

            cout << "Select the exact year" << endl;
            cin >> year_Selection;
            //Checking the year selection for the leap
            bool isLeapYear = (((year_Selection%4 == 0) && (year_Selection%100 != 0)) || (year_Selection%400 == 0));

            if (isLeapYear)
                cout << "The month February has 29 days in year " << year_Selection << endl;
            else
                cout << "The month February has 28 days in year " << year_Selection << endl;

            break;
            };
        default:
            cout << "You have entered wrong month number" << endl;
    }




}
