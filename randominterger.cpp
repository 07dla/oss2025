#include "Randominteger.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

RandomInteger::RandomInteger(int lw, int hh)
 :low(lw), high(hh)    
{
 srand(time(0));
 int temp = rand();
 value = temp %(high - low + 1) + low;
} 
RandomInteger::~RandomInteger()
 {
 }
 void RandomInteger::print() const 
{
 cout << value << endl;
 }
