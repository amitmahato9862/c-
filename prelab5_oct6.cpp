// Author: Amit Kumar Mahato
// Date: 6th october 2024

// Finish the following program which prints alphabets up to the user's
// letter inclusively using a While Loop.
#include <iostream>

using namespace std;

int main()
{
    char letter;
    char counter = 'a'; // Initialize the variable

    // User enters a letter
    cout << "Enter a lowercase letter before z to print the alphabet up to: " << endl;
    cin >> letter;

    // Check for invalid user input
    if (letter < 'a' || letter > 'z')
    {
        cout << "Invalid Input" << endl;
        return -1; // Terminate program
    }

    while (counter <= letter) {
        cout << counter << " "; // Print the current letter
        counter++; // Increment the counter
    }

    cout << endl; // Print a new line after the output

    return 0;
}
