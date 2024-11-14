// Name: Amit Kumar Mahato
// netId: pgc53
// Date: 30 sept. 2024
// Prelab 4

#include <iostream>

using namespace std;

int main()
{
     char ans;
     string mesz;

     cout << "Is Kirk better than Piccard? ('Y' or 'N')" << endl;
     cin >> ans;

    switch(ans){
      case 'y':
      case 'Y':
          cout << "You think Kirk is better than Piccard..." << endl;
          mesz = "Wrong!";
          break;
      
      case 'n':
      case 'N':
          cout << "You do not think kirk is better than Piccard..." << endl;
          mesz = "Correct!";
          break;

      default:
          mesz = "Invalid Input.";
          break;

    }
    cout << mesz << endl;

     return 0;
}