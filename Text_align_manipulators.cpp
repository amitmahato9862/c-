#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  cout << "-----------------------" << endl;
  cout << setw(10)<< left << "Dog age" << "|";
  cout << setw(12) << right << "14 months" << endl;

  cout << "-----------------------" << endl;

  cout << setw(10) << left << "2 months" << "|";
  cout << setw(12) << right << "14 months" << endl;

  cout << setw(10) << left << "6 months" << "|";
  cout << setw(12) << right << "5 years" << endl;

  cout << setw(10) << left << "8 months" << "|";
  cout << setw(12) << right << "9 years" << endl;

  cout << setw(10) << left << "1 year" << "|";
  cout << setw(12) << right << "15 years" << endl;

  cout << "-----------------------" << endl;
  return 0;
}