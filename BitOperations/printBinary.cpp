//    FILE: printBinary.cpp
//  AUTHOR: S. Blythe
//    DATE: 9/2025
// PURPOSE: implementation of printBinary() 
#include "printBinary.hpp"

#include <iostream>

using namespace std;

// PARAMETERS:
//   base10number - the number to print in binary
//   toStream - the output stream to "print" into; defaults to cout
// RETURNS:
//      the updated stream (also modified as a parameter)
ostream& printBinary(unsigned int base10number,ostream &toStream)
{
  // figure out how many bits to print. Note that this code is
  // designed to be "forward compatible" by getting the compiler to
  // determine this based on wha the compiler determines as the number
  // of bytes in an unsigned int. In 9/25, that was 4 bytes (i.e. 32
  // bits), but that may change in the future. This could should still
  // work if such a change happens
  unsigned int nBits = sizeof(unsigned int) * 8;

  // build a "mask" of all zero's except a single '1'. That '1' will
  // start at the leftmost bit (MSb)
  //    ... the algorithm loop below will have that '1' work its way to
  //        the right until it "drops off" the right end. 
  unsigned int mask = 1 << (nBits-1);

  // as long as all the bits in the mask are not zero (that is, keep
  // going until the '1' has dropped off the right end/edge) ...
  while (mask)
    {
      // is there a 1 at the current masked position in the base 10 number? 
      if (mask & base10number)
	toStream << 1; // if there is a 1 there, print it out ...
      else
	toStream << 0; // ... otherwise print a 0.

      // "shift" the single '1' in the mask to the right by one bit position. 
      mask = mask >> 1; 
    }

  // return the updated stream
  return toStream;
}
