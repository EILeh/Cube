/* Cube
 *
 * Description
 *
 * Program that calculates the cube of a non-negative integer and prints the in-
 * teger or an error if there is a overflow.
 *
 * Writer of the program
 *
 * Name: EILeh
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

    // Checks that the input number is smaller than 2 to the power of 32 other-
    // wise overflow will happen.
    if ( number < pow(2,32) )
    {
        int cube;
        cube = number * number * number;
        cout << "The cube of " << number << " is " << cube << ".";
    }
    else
    {
        int cube;
        cube = number * number * number;
        cout << "Error! The cube of " << number << " is not " << cube << ".";
    }

    return 0;
}
