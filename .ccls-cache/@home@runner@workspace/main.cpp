//This program will let user name organism and calculate total population size within a given
// number of days
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int population, days;
  double increase;
  string name;

  cout<< "What is the name of your organism :"<< endl;
  cout<< "\n";
  getline(cin,name)>> name;
  cout<< "\n";

  cout<< "Enter starting population :"<< endl;
  cout<< "\n";
  cin>> population;
  cout<< "\n";
  while (population<1)
    {
      cout<< "Invalid input."<< endl;
      cout<< "Enter a number greater than zero :"<< endl;
      cin.clear();
    }
}