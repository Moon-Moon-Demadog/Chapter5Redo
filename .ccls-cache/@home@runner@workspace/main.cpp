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

  cout<< "Enter starting population :"<< endl;
  cout<< "\n";
  cin>> population;
  cout<< "\n";
  while (population<1)
    {
      cout<< "Invalid input."<< endl;
      cout<< "Enter a number greater than zero :"<< endl;
      cin.clear();
      cin.ignore();
      cout<< "\n";
      cin>> population;
    }

  cout<< "Enter daily average percent of population increase :"<< endl;
  cout<< "\n";
  cin>> increase;
  cout<< "\n";
  while ( increase < 1)
    {
      cout<< "Invalid input."<< endl;
      cout<< "Enter a percentage greater than zero :"<< endl;
      cin.clear();
      cin.ignore();
      cout<< "\n";
      cin>> increase;
    }

  double increase_Mulitply = increase / 100.00;

  cout<< "How many days are we observing :"<< endl;
  cout<< "\n";
  cin>> days;
  cout<< "\n";
  while (days < 1)
    {
      cout<< "Invalid input."<< endl;
      cout<< "Enter a number great than zero :"<< endl;
      cin.clear();
      cin.ignore();
      cout<< "\n";
      cin>> days;
    }
  cout<< "What is the name of your organism :"<< endl;
 
  cin.clear();
  cin.ignore();
  getline(cin,name);
  
  cout<< name << " is a great name!"<< endl;
  
  double increase_Population = population * increase_Mulitply;
  double total_Growth = increase_Population * days;

  cout<< "Your organism "<< name << " will reach a population of "<< total_Growth;
  cout<< " in " << days << " days."<< endl;

  return 0;
}