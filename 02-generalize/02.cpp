/* Program to illustrate drawing of a Square using Object and Class in C++ Programming */
/*Exception Handling is applied for Validation*/

#include <iostream>
using namespace std;

class square
{
private:
  int side,column,row;
  char character;
public:
  void square_data()
  {
    cout << "Enter character to print\n";
    cin >> character;
    cout << "Enter side of Square\n";
    cin >> side;
    
    
    if(cin)
    {
      try
      {
        if(side < 1)
        throw side;
        else if(side == 1)
        top_bottom(side);
        else 
        square_draw(side);
      }
      
      catch(int exp)
      {
        cerr << "Sorry! Expected Positive Integer Value For Box Side!\n";
        square_draw(3);
      }
    }
    else
    cerr << "Please Confirm Both Values Are Inserted or Wrong Data!";
  }
  
  void top_bottom(int var1)
  {
    for(column = 0; column < var1; ++column)
    cout << character;
  }
  
  void left_right(int var2)
  {
    for(row = 0; row < var2-2; ++row)
    {
      cout << character;
      for(column=0; column < var2-2; ++column)
      cout << " ";
      cout << character<<"\n";
    }
  }
  
  void square_draw(int var3)
  {
    top_bottom(var3);
    cout << "\n";
    left_right(var3);
    top_bottom(var3);   
  }
};

int main()
{
  square obj;
  obj.square_data();
  return 0;
}
