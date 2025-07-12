#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputFile;
  string filename;
  string line;
  string High = "";
  string Low = "";
  int namecount = 0;

  cout<< "Name of file : " << endl;
  cin>> filename;

  inputFile.open(filename);
  
  if (inputFile.is_open())
  {
    while (getline(inputFile,line))
      {
        namecount++;
        if (namecount == 1)
        {
          High = line;
          Low = line;
        }
        else
        {
          if (line > High)
          {
            High = line;
          }
          if (line < Low)
          {
            Low = line ;
          }
        }
      }
  }
  inputFile.close();
  if (namecount > 0)
  {
    cout << "Number of kids :"<< namecount << endl;
    cout<< High << " is last in line." << endl;
    cout<< Low << " is first"<< endl;
  }
  else
  {
    cout<< "ERROR: could not open file."<< endl;
  }
  return 0;
}