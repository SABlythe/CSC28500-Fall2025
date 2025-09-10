//    FILE: printBinary.hpp
//  AUTHOR: S. Blythe
//    DATE: 9/2025
// PURPOSE: given a (positive) number, print its binary equivalent

#ifndef _PRINT_BINARY_HPP_
#define _PRINT_BINARY_HPP_

#include <iostream>

// PARAMETERS:
//   base10number - the number to print in binary
//   toStream - the output stream to "print" into; defaults to cout
// RETURNS:
//      the updated stream (also modified as a parameter)
std::ostream& printBinary(unsigned int base10number,
			  std::ostream &toStream=std::cout);

#endif
