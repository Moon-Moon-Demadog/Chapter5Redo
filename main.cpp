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
for(int k = 0; k<10;++k )
  {
    cout<< current_pattern<< endl;
    current_pattern.pop_back();
  }
   return 0; 
}