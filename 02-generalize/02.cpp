/* Program to illustrate drawing of a Square using Object and Class in C++ Programming */
/*Exception Handling is applied*/

#include <iostream>
using namespace std;

class square
{
    private:
        int side,column,row;
    public:
       void square_data(){
         cout << "Enter side of Square\n";
         cin >> side;
         
        if(cin)
        {
         try{
             if(side < 1)
              throw side;
             else if(side == 1)
              top_bottom(side);
            else 
             square_draw(side);
            }

         catch(int exp){
               cout << "Bad Integer value!\n";
               square_draw(3);
            }
        }
        else
         cout << "Sorry you entered an invalid input";
       }

       void top_bottom(int s1){
        for(column = 0; column < s1; ++column)
            cout << "#";
        }
        
        void left_right(int s2){
         for(row = 0; row < s2-2; ++row){
          cout << "#";
          for(column=0; column < s2-2; ++column)
            cout << " ";
          cout << "#\n";
         }
        }
        
        void square_draw(int s3){
        top_bottom(s3);
         cout << "\n";
         left_right(s3);
         top_bottom(s3);   
       }
};

 int main(){
      square obj;
      obj.square_data();
      return 0;
    }
