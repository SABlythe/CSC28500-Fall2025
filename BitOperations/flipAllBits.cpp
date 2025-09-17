#include <iostream>
#include "printBinary.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  unsigned int number;//, position;
  cin >> number; // >> position;

  cout << "original:";
  printBinary(number);
  cout << endl;

  unsigned int answer = ~number;

  cout << " updated:";
  printBinary(answer);
  cout << endl;
  
  cout << "new number is :" << answer << endl;
  
  return 0;
}
