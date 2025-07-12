#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputFile;
  string filename;
  string line;
  string High;
  string Low;
  string name;
  int namecount = 0;

  cout<< "Name of file : " << endl;
  cin>> filename;

  inputFile.open(filename);
  if (inputFile.is_open())
  {
    while (getline (inputFile, name))
      {
        if (High < name){
          High = name;
        } else if ( Low < name) {
          Low = name;
        }
        cout<< High << " Is first in line and " << Low << " is last." << endl;
      }
    while (getline(inputFile,line))
      {
        namecount++;
      }
    inputFile.close();
    cout<< "Number of kids : " << namecount << endl;
  } else {
    cout<< "ERROR: Could not open file."<< endl;
  }
  return 0;
  }