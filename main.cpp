#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputFile;
  string filename;
  string line;
  int namecount;

  cout<< "Name of file : " << endl;
  cin>> filename;

  inputFile.open(filename);
  if (inputFile.is_open())
  {
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