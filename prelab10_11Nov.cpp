// Name: Amit Kumar Mahato
// netId: pgc53
// Date: November 11, 2024

// Write a function that multiplies each element in the array "myArray"
// by the variable "multiplyMe".
#include <iostream>
using namespace std;

// Function prototype
void multiplyArray(int arr[], int size, int multiplyMe);

int main()
{
    const int SIZE = 10;
    int myArray[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int multiplyMe = 5;

    // Function call
    multiplyArray(myArray, SIZE, multiplyMe);

    // Print the array after multiplication
    for (int i = 0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
void multiplyArray(int arr[], int size, int multiplyMe)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= multiplyMe;  // Multiply each element by multiplyMe
    }
}
