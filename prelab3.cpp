// Name: Amit Kumar Mahato
// NetId: pgc53

#include <iostream>
#include <ctime>   // for seeding rand
#include <cstdlib> // C standard library

using namespace std;

int main()
{

        int rand_num;

        // seeds rand (needed for getting random numbers)
        srand(time(NULL));

        // randomly generates a number 1 - 20 inclusively
        rand_num = rand() % 20 + 1;

        cout << "You roll a " << rand_num << ": ";
        if (rand_num == 20){
          cout << "CRITICAL HIT!!" << endl;

        }else if(rand_num >= 10 && rand_num <=19 ){
          cout << "Attack Strikes"<< endl;
        }else{
          cout << "Attack Misses" << endl;
        }


        

    return 0;
}