//Amit Kumar Mahato p
// NetId: pgc53
// Date: 4th November, 2024

#include <iostream>
using namespace std;

int main(){
  const int SIZE = 7; // size of array
  int numbers[7];

  cout << "Please enter 7 integers: " << endl;
  for(int i=0; i<SIZE; i++){
    cin >> numbers[i];
  }
  cout << "\n" << endl;
  cout << "Output: " << endl;
  for(int i=0; i<SIZE; i++){
    cout << numbers[i] << " ";
  }
  return 0;
}