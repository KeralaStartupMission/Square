/* Program to illustrate drawing of a Square using Object and Class in C++ Programming */


#include <iostream>
#include "Square.cpp"
using namespace std;


int main()
{
  int side;
  char symbol;
  cout << "Enter Symbol to draw\n";
  cin >> symbol;
  cout << "Enter side of Square Box\n";
  cin >> side;
  Square obj;
  obj.square_generate(symbol,side);
  return 0;
}

