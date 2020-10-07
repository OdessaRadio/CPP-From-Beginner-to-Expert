# include <iostream>

using namespace std;


main()
{
    double var1, var2;

    beginning: //label beginning
    system ("cls");

    cout << "Enter number 1 " << endl;
    cin >> var1;

    cout << "Enter number 2 " << endl;
    cin >> var2;

    cout << "Select the operation" << endl;

    cout << "+ add" << endl;
    cout << "- substract" << endl;
    cout << "* multiply" << endl;
    cout << "/ divide" << endl;

    char operation;

    cin >> operation;

    system ("cls");

    switch (operation)
        {
        case '+':
            cout << var1 << " + " << var2 << " = "<< (var1+var2) << endl;
            break;

        case ('-'):
            {
            cout << var1 << " - " << var2 << " = "<< (var1-var2) << endl;
            break;
            }

        case ('*'):
            {
            cout << var1 << " * " << var2 << " = "<< (var1*var2) << endl;
            break;
            }

        case ('/'):
            {
            if (var2) // var!=0
                {
                cout << var1 << " / " << var2 << " = "<< (var1/var2) << endl;
                break;
                }
            else
                {
                cout << "Can't divide by 0" << endl;
                }
            }

        default:
            cout << "you have entered the wrong number" << endl;
        }

        char selection;
        cout << "Do you want to run again? (Y/N)";
        cin >> selection;

        if (selection == 'y' || selection == 'Y')
            goto beginning; // go to beginning
<<<<<<< HEAD
            cout << "End of program";
=======
>>>>>>> a3e9c9eb823d15159a808ac3e5498df7240e2203



}
