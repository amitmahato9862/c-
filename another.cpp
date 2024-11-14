#include <iostream>
using namespace std;

// Outputs average of list of integers
// First value indicates list size
// Ex: 4  10 1 6 3  yields (10 + 1 + 6 + 3) / 4, or 5

int main()
{
  char letter1;
  char letter2;

  letter1 = 'y';
  while (letter1 <= 'z')
  {
    letter2 = 'a';
    while (letter2 <= 'c')
    {
      cout << letter1 << letter2 << " ";
      ++letter2;
    }
    ++letter1;
  }
  return 0;
}