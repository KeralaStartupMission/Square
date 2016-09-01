/* Program to illustrate drawing of a Square using Object and Class in C++ Programming */

#include <iostream>
using namespace std;

class square
{
private:
  int side,column,row;
public:
  void square_data()
  {
    cout << "Enter side of Square\n";
    cin >> side;
    top_bottom();
    if(side > 1)
    {
      cout << "\n";
      left_right();
      top_bottom();
    }
  }
  void top_bottom()
  {
    for(column = 0; column < side; ++column)
    cout << "#";
  }
  void left_right()
  {
    for(row = 0; row < side-2; ++row)
    {
      cout<< "#";
      for(column=0; column < side-2; ++column)
      cout << " ";
      cout << "#\n";
    }
  }
};
int main()
{
  square obj;
  obj.square_data();
  return 0;
}

