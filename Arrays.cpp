# include <iostream>

using namespace std;

//ARRAYS
main()
{
    double storeArray[4];
    double storeArraySum;

    cout << "Please, enter 4 numbers" << endl;

    cout << "Enter 1st number " ;
    cin >> storeArray[0];
    cout << "Enter 2nd number " ;
    cin >> storeArray[1];
    cout << "Enter 3rd number " ;
    cin >> storeArray[2];
    cout << "Enter 4th number " ;
    cin >> storeArray[3];

    storeArraySum = storeArray[0] + storeArray[1] + storeArray[2] + storeArray[3];

    cout << "Result = " << storeArraySum << endl;
    cout << "Address of first element = " << storeArray << endl;
    cout << "Address of first element = " << &storeArray[0] << endl;
    cout << "Address of last element = " << &storeArray[3] << endl;


}
