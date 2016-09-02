/*Program illustrates the drawing of a Square Box  in C++ programming*/

#include <iostream>
using namespace std;

class Square
{

private:
  int column,row,side;
  char symbol;

public:
  void square_generate(char function_symbol,int function_side)
  {
    symbol = function_symbol;
    side = function_side;

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
        square_draw(3);
      }
    }
    else
    cerr << "Error: Confirm Both Values Are Inserted or Wrong Data!";
  }

  void top_bottomSide(int temporary_variable)
  {
    for(column = 1; column <= temporary_variable; column++)
    cout << symbol;
    cout << "\n";
  }

  void left_rightSide(int temporary_variable)
  {
    for(row = 1; row <= temporary_variable-2; row++)
    {
      cout << symbol;
      for(column=1; column <= temporary_variable-2; column++)
      cout << " ";
      cout << symbol;
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

