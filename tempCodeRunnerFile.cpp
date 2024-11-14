     char ans;
     string mesz;

     cout << "Is Kirk better than Piccard? ('Y' or 'N')" << endl;
     cin >> ans;

     // TODO - Change the following IF-ELSE statement to an
     // equivalent switch statement.
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
