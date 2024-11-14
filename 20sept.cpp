#include<iostream>
using namespace std;
 
int main(){
  char letter ;
  letter = 'A';
  cout << letter << endl;
  letter = 'B' + 1;  
  cout << letter  << endl;  // letter + 1
  return 0;

  // if we add 1 to the variable letter in cout line then the output will be ascii code + 1
  // however, if we add "B" + 1 then the output will be different i.e. C 
}