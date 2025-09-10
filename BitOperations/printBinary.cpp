#include "printBinary.hpp"

#include <iostream>

using namespace std;

ostream& printBinary(unsigned int base10number,ostream &toStream)
{
  unsigned int nBits = sizeof(unsigned int) * 8;
  unsigned int mask = 1 << (nBits-1);

  while (mask)
    {
      if (mask & base10number)
	toStream << 1;
      else
	toStream << 0;
      mask = mask >> 1; 
    }

  return toStream;
}
