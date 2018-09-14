#include <iostream>
#include "stack.h"
#include <cstdlib>
#include <cassert>
using namespace std;

typedef int item;


//Precondition: a variable of the type int, as defined by the typedef, exists
//Postcondition: The entry is added to the stack.
void Stack::push(item& entry)
{
  data[used++] = entry;
}

//Precondition: stack object exists
//Postcondition: the value for the top position on a stack is returned
item Stack::pop()
{
  return data[--used];
}

//Precondition: a stack object exist
//postcondition: the value of the item at the top of the stack is returned.
item Stack::peek()
{
  return data[used - 1];
}

