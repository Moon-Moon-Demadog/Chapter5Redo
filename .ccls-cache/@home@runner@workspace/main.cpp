# include <iostream>
# include <string>
using namespace std;

int main()
{
  string pattern_char = "+";
  string current_pattern = "";
  int i = 0;

  cout<< "Enjoy this pattern." << endl;
  while (i<10)
    {
      current_pattern += pattern_char;
      cout<< current_pattern << endl;
      i++;
    }
while (i>0)
  {
    cout<< current_pattern<< endl;
    current_pattern = "";
    current_pattern += pattern_char;
    i--;
  }
    
}