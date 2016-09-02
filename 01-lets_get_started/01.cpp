/* Program to illustrate drawing of a Square using Object and Class in C++ Programming */

#include <iostream>
using namespace std;

class Square
{

private:
  int column,row,side;

public:
  void square_generate(int temporary_variable)
  {
    side = temporary_variable;

    if(cin)
    {
      try
      {
        if(side < 1)
        throw side;
        else if(side == 1)
        top_bottomSide(side);
        else
        square_draw(side);
      }

      catch(int errorVariable)
      {
        cerr << "Error: Expected Positive Integer Value For Box Side!\n";
      }
    }
    else
    cerr << "Error: Wrong Data!" << endl;
  }

  void top_bottomSide(int temporary_variable)
  {
    for(column = 1; column <= temporary_variable; column++)
    cout << '#';
    cout << "\n";
  }

  void left_rightSide(int temporary_variable)
  {
    for(row = 1; row <= temporary_variable-2; row++)
    {
      cout << '#';
      for(column=1; column <= temporary_variable-2; column++)
      cout << " ";
      cout << '#';
      cout << "\n";
    }
  }
  
  void square_draw(int draw_variable)
  {
    top_bottomSide(draw_variable);
    left_rightSide(draw_variable);
    top_bottomSide(draw_variable);
  }
};

int main()
{
  int side;
  cout << "Enter side of Square Box\n";
  cin >> side;
  Square obj;
  obj.square_generate(side);
  return 0;
}
