#include <iostream>
using namespace std;

class Stack
{
typedef int item;
public:
  Stack() {used = 0;} 
  void push(item& entry);
  item pop();

  int size() {return used;}  // Inline
  bool is_empty() {return used == 0;}  // Inline
  item peek();

private:
  item data[100];
  int used;
};