#include <iostream>
using namespace std;

int main(){
  int counter = 0, number;
  cout << "Enter the values, type -1 to indicate the end: ";
  cin >> number;
  while (number!=-1){
    if (number >100){
      counter++;
    }
    cin >> number;
  }

  cout << counter << " numbers entered before -1" << endl;
}