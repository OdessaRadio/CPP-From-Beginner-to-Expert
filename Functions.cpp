#include <iostream>


using namespace std;

int main(){
    string name;
    cout << "Give me your name and surname:"<<endl;
    cin >> name;

    int age;
    cout << "Give me your age:" <<endl;
    if (cin >> age)
    {
        cout << "Good\n";
    }
    else cout << "No Good\n";
//    cout << cin.rdstate() << endl;
//    cin.clear(); //new line is here :-)
//    cout << cin.rdstate()<< endl;  //new line is here :-)

    if (cout << 1+1 << endl){
        cout << "Good" << endl;
    }


    }




