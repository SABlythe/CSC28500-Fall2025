//simple example usage of printBinary() function
#include <iostream>

#include "printBinary.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  unsigned int b10;
  if (argc>1)
    {
      b10 = stoi(argv[1]); 
    }
  else
    {
      cout << "Enter a positive number: ";
      cin >> b10;
    }

  cout << b10 << " in base 10 is ";

  printBinary(b10,cout);

  cout << " in base 2 (32 bits)" << endl;

  return 0;
  
}
