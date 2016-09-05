/* Square generating program */
#include <iostream>
using namespace std;

class Square
{
private:
  int column,row,side;

public:
  void square_generate(int temp_side)
  {
    side = temp_side;

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
        cerr << "Error: Invalid data. Expected positive integer!\n";
      }
    }
    else
    cerr << "Error: Wrong Data!" << endl;
  }

  void top_bottom_side(int temp)
  {
    for(column = 1; column <= temp; column++)
    cout << '#';
    cout << "\n";
  }

  void left_right_side(int temp)
  {
    for(row = 1; row <= temp - 2; row++)
    {
      cout << '#';
      for(column=1; column <= temp - 2; column++)
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
  Square square;
  cout << "Enter side of Square Box\n";
  cin >> side;
  square.square_generate(side);
  return 0;
}
