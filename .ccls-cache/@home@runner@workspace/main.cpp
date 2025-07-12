#include <iostream>
#include <random>
using namespace std;

int main()
{
  const int MIN = 0;
  const int MAX = 100;
  int guess;
  int counter = 0;
  random_device engine;
  uniform_int_distribution<int>RandomValue(MIN,MAX);
  int random = RandomValue(engine);

  cout<< "Lets play a game!" << endl;
  cout<< endl;
  cout<< " I'm thinking of a number between " << MIN << " & " << MAX ;
  cout<< " , Enter a number  :"<< endl;
  cout<< "x \n";
  cin>> guess;

while (guess < MIN || guess > MAX)
  {
    cout<< "Invalid, pleae input a number between " << MIN << " & " << MAX << endl;
    cin.clear();
    cout<< "Retry :" << endl;
    cin>> guess;
  }
    while (guess != random)
      {
       ++counter;
        if (guess < random){
          cout<< "Too low, Try again :" << endl;  
        } else {
          cout<< "Too high, Try again :" << endl;
        }
        cin>> guess;
      }
  if ( guess == random)
    {
      cout<< "Congrats! you got the right answer "<< guess<< " it only took you : "<< counter;
      cout<< " guesses!"<< endl;
    }
  return 0;
}