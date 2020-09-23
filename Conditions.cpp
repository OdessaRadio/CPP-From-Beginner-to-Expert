# include <iostream>

using namespace std;


main()
{
//Ex.1
/*
    int personAge;

    cout << "Enter your age" << endl;
    cin >> personAge;
    cout << ((personAge>=18) ? "Your age is higher or equal to 18" : "Your age is lower than 18") << endl;
*/


//Ex.2
    int examPoints;

    cout << "Enter the number of points received on the exam ";
    cin >> examPoints;

    if ((examPoints>=0) && (examPoints <= 100))
    {
        string outputMessage = (examPoints >= 50)
                                ?"Exam was passed"
                                :"You didn't pass the exam!";
        cout << outputMessage;
    }
    else
    {
        cout << "ERROR. The number of points is invalid !" << endl;
    }

}
