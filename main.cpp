#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    int number;
    cin >> number;

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
