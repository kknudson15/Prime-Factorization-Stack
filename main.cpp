/* 
Kyle Knudson
CSCI 591
cs301188
due: 3/13/18
This file contains the main program that allows the user to enter an integer value that they 
are looking to determine the prime factorization of.  THe prime factorization is then printed in
descending order by utilizing a stack object.  The user will continue to be prompted for integers until
they enter a 0.   
*/

#include <cstdlib>
#include <cassert>
#include <iostream>
#include "stack.h"
using namespace std;

int smallest(int n);
void prime(int n, Stack& stack1);

int main()
{
  int item = 1;
  Stack stack1;

  while (item != 0)
  {
    cout << "Enter a positive integer (0 to stop): ";
    cin >> item;

    if (item == 0)
      cout  << "Thanks! Program ended! " << endl;
    else if(item == 1)
      cout << "Prime factors: 1 " << endl;
    else
    {
      prime(item, stack1);
      cout << endl;
    }
  } 

    //return 0;
}

void prime(int n, Stack& stack)
{
  int small = smallest(n);
  //base case
  if (n == small)
  {
    stack.push(n);
    cout << "Prime factors: ";
    cout << stack.pop();
  }
    //recursive call
  else
  {
    prime(n / small, stack);
    stack.push(small);
    cout << stack.pop();
  }
  cout << ' ';
}

int smallest(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (n%i == 0)
      return i;
  }
}