#include <iostream>
#include <time.h>

/*Functions and pointers*/

using namespace std;

// Lottery -pseudo random numbers generator

void lottery(int,int);

int main (){

    lottery(49,6);

    return 0;
}

void lottery(int total_balls,int balls_to_draw){
    if (total_balls < balls_to_draw)
        return;

    srand(time(NULL)); //seeds
    int *balls = new int [balls_to_draw];
    for (int i = 0; i < balls_to_draw; i++){
        balls[i] = rand() % total_balls + 1; // to have numbers from 1 to 49 we use +1
        //cout << balls[i] << endl;
        for (int j = 0; j < i+1; j++){
            if (balls[i]==balls[j] && i != j){
                i--;
                break;
            }
            else if (i == j)
                cout << balls[i] << endl;
        }
    }


    delete [] balls;

}
