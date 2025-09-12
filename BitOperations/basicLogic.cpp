#include <iostream>

#include "printBinary.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  unsigned int a,b;
  cin >> a >> b;

  cout << "a=";
  printBinary(a);
  cout << endl;
  cout << "b=";
  printBinary(b);
  cout << endl;

  if (a&&b)
    {
      cout << "&& gave true"
	   << endl;
    }
  else
    {
      cout << "&& gave false"
	   << endl;
    }

  if (a&b)
    {
      cout << "& gave true"
	   << endl;
    }
  else
    {
      cout << "& gave false"
	   << endl;
    }

  if (a||b)
    {
      cout << "|| gave true"
	   << endl;
    }
  else
    {
      cout << "|| gave false"
	   << endl;
    }

  if (a|b)
    {
      cout << "| gave true"
	   << endl;
    }
  else
    {
      cout << "| gave false"
	   << endl;
    }


  unsigned int c;
  c = a^b;

  cout << "a^b is " << c << endl;
  printBinary(c);
  cout << endl;
  
  
  return 0;
}
