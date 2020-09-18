# include <iostream>

using namespace std;


main()
{
    /*
        0
        1
        0101 0110

        126 = 1*10^2 + 2*10^1 + 6*10^0 = 100 + 20 + 6 = 126

        1 0 1 0 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 8 + 0 + 2 + 0 = 10

        1 0 1 0 = 1*2^3 + 1*2^1 = 10

        1 0 1 1 0 0 = 1*2^2 + 1*2^3 + 1*2^5 = 44
    */
    /*
        Bitwise AND - &
        Bitwise OR - |
        Bitwise NOT - ~ (tilde)
        Bitwise XOR - ^ (caret) eXclusive OR
        Bitwise left shift <<
        Bitwise right shift >>
    */

    cout << (10 & 2) << endl;

    /*
    1 0 1 0 = 10
    0 0 1 0 = 2
    - - - -
    0 0 1 0 = 2
    */

    cout << ( 10 | 2 ) << endl;

    /*
    1 0 1 0 = 10
    0 0 1 0 = 2
    - - - -
    0 0 1 0 = 2
    */

    cout << (10 ^ 2) << endl;

    /*
    1 0 1 0 = 10
    0 0 1 0 = 2
    - - - -
    1 0 0 0 =
    */

    cout << (~10) << endl;

    /*
    00000(0) 1 0 1 0
    11111(1) 0 1 0 1
    */

    cout << (10 << 1) << endl;

    /*
      1 0 1 0 = 10
    1 0 1 0 0 = 20
    */

    cout << (10 >> 1) << endl;

    /*
    1 0 1 0 = 10
    0 1 0 1 = 5
    */
}
