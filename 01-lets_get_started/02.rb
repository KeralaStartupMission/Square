# To make a empty square with user input
class Square
  def self.generate(x)
    count = 0
    count1 = 0
    x.times do
      count += 1
      x.times do
        count1 += 1
        if (count == 1) || (count == x)
          print '#'
        elsif (count1 == 1) || (count1 == x)
          print '#'
        else
          print ' '
        end
      end
      puts "\n"
      count1 = 0
    end
  end
end
print'Enter the one side length of sq :'
side = gets.to_i
Square.generate(side)
