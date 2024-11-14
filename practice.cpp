#include <iostream>
#include <fstream>
using namespace std;
#include <string>

int main(){
  fstream outFS;
  outFS.open("myoutfile.txt");
  if (!outFS.is_open()){
    cout << "Couldn't open the file myoutfile.txt" << endl;
  }else {
    cout << "Yup, successfully opened" << endl;
  }
  outFS << "Hello, this is the first data" << endl;
  outFS << "hello, this is the second data" << endl;
  double number = 510;
  outFS << " This is my phone number: "<< number << endl;
  outFS.close();
  string line;
  fstream readFile("myoutfile.txt");
  while(getline(readFile,line)){
    cout << line << endl;
  }
  readFile.close();
  

  return 0;
}