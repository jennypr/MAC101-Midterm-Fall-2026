#include <iostream>
using namespace std;

int main()
{
    int input;

    cout << "Enter a number to print pattern\n";
    cin >> input;

    // Christmas tree pattern
    for (int j = 1; j <= input; j++)
    {
        // unlike the triagle pattern where we printed " " and '*' in the same inner loop, for the christams tree
        //patern we have to print the spaces first and then create another loop for the asteriks in order to center the pattern
        //for every asterisk the space decreases
        for (int i = 1; i <= input - j; i++)
        {
            cout << " ";
        }

        // Print stars
        for (int i = 1; i <= j; i++)
        {
            cout << "* ";
        }

        cout << endl;
    }

  

    return 0;
}
