// prelab 6
// Name: Amit Kumar Mahato
// NetId: pgc53
// Date: october 14, 2024

// Finish the following program which adds up all even integers from 0 to 
// the user's given number inclusively using a FOR loop. The total should be 
// assigned to the variable 'total'.

#include <iostream>
using namespace std;

int main(){
  int num, even_sum = 0, i;
  cout << "Enter a positive integer: ";
  cin >> num;

  for (i = 0; i<= num; i=i+2){
    even_sum = even_sum + i;
  }
  cout << "Total: " << even_sum << endl;

  return 0;
}