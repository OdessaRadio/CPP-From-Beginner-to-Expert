#include <iostream>
#define PI 3.14

typedef double dl;

//Loops and functions - exercises

using namespace std;

void initMenu();
void menuDecision(int);

double areaCircle(double r);
double areaSquare(double a);
double areaRectangle(double a, double b);
double areaTriangle(double a, double h);

int main ()
{
    system ("cls");

    int choice;
    char cont;
    do
    {
    initMenu();

    cin >> choice;

    menuDecision(choice);

    do
    {
        cout << "Do you want to continue? (Y/N)" << endl;
        cin >> cont;
    } while (cont != 'y' && cont != 'Y' && cont != 'N' && cont != 'n');



    } while (cont == 'y'|| cont == 'Y');



    return 0;
}

void initMenu()
{
    cout << "Enter option:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;
}

void menuDecision(int choise)
{
    double r,a,b,h;

    switch (choise)
        {
        case 1:
            cout << "Enter the radius: " << endl;
            cin >> r;
            areaCircle (r);
            break;
        case 2:
            cout << "Enter the side of a square: " << endl;
            cin >> a;
            areaSquare (a);
            break;
        case 3:
            cout << "Enter the width and height of a rectangle: " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4:
            cout << "Enter the base and height of triangle: " << endl;
            cin >> a >> h;
            areaTriangle(a ,h);
            break;
        default:
            cout << "No choice made" << endl;
        }
}

double areaCircle (double r)
{
    double result = PI * r *r;
    cout << "The area of the circle is: " << result << endl;
    return result;
}

double areaSquare(double a)
{
    double result = a*a;
    cout << "The area of the square is: " << result << endl;
    return result;
}

double areaRectangle(double a, double b)
{
    double result = a*b;
    cout << "The area of the rectangle is: " << result << endl;
    return result;
}

double areaTriangle(double a, double h)
{
    double result = a*h;
    cout << "The area of the triangle is: " << result << endl;
    return result;
}
