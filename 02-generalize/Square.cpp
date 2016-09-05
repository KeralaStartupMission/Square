/*Program illustrates the drawing of a Square Box  in C++ programming*/

#include <iostream>
using namespace std;

class Square
{
private:
  int column, row, side;
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
        top_bottom_side(side);
        else
        square_draw(side);
      }

      catch(int errorVariable)
      {
        cerr << "Error: Invalid Input. Expected Positive Integer!\n";
        square_draw(3);
      }
    }
    else
    cerr << "Error: Confirm Both Values Are Inserted or Wrong Data!";
  }

  void top_bottom_side(int temp)
  {
    for(column = 1; column <= temp; column++)
    cout << symbol;
    cout << "\n";
  }

  void left_right_side(int temp)
  {
    for(row = 1; row <= temp - 2; row++)
    {
      cout << symbol;
      for(column=1; column <= temp - 2; column++)
      cout << " ";
      cout << symbol;
      cout << "\n";
    }
  }

  void square_draw(int draw_variable)
  {
    top_bottom_side(draw_variable);
    left_right_side(draw_variable);
    top_bottom_side(draw_variable);
  }
};
