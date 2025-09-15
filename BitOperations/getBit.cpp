#include <iostream>
#include "printBinary.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  unsigned int number, position;
  cin >> number >> position;

  cout << "original:";
  printBinary(number);
  cout << endl;

  // build "mask" with single 1 in it
  unsigned int mask=1;
  mask = mask << position; 

  cout << "    mask:";
  printBinary(mask);
  cout << endl;
  
  
  // bit-wiser "and" mask with the number
  unsigned int answer = number & mask;

  cout << "  and-ed:";
  printBinary(answer);
  cout << endl;
  
  // move answer "bit" into rightmost position
  answer = answer >> position;

  cout << "right sh:";
  printBinary(answer);
  cout << endl;

  cout << "Extracted bit is :" << answer << endl;
  
  return 0;
}
