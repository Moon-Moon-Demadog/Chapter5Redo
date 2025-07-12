// This program will display the year and a bargraph of the population
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;

int main ()
{

  string town;
  string filename;
  string line;
  ifstream inputFile;
  const int factor = 1000;
  const int Start_Year = 1900;
  const int Year_Increase = 20;
  int i = 0;

  cout<< "Let's look at a bar graph:"<< endl;
  cout<< "what is the town name :";
  getline(cin,town);
  cout<< endl;
  cout<< "File name for data :";
  cin>> filename;
  cin.ignore();
  cin.clear();
  inputFile.open(filename);


  if (inputFile)
  {
    while (getline(inputFile,line))
      {
        int value = stoi(line) / factor;
        int numStars = value;
        for (int j = 0; j < numStars; ++j)
          {
          cout<< "*";
        }
       
        if (i>0)
        {
          int NextYear = (Year_Increase * i) + Start_Year;
          cout<< "Year "<< NextYear << setw(3) << numStars << endl;
        }
      }
  }
  else
  {
    cout<< "ERROR: couldn't open file"<< endl;
  }
  return 0;
}