# To make a empty square
class Square
  def initialize(side,display_char)
    @side = side
    @display_char = display_char
    @cavity_width = side - 2
  end

  def first_last_line
    @side.times { print @display_char }
    print "\n"
  end

  def middle_line
    @cavity_width.times { puts @display_char + ' ' * @cavity_width + @display_char }
  end

  def generate
    first_last_line

    unless @side < 2
      middle_line
      first_last_line
    end
  end
end

side = 0
def display(side,display_char)
side = 3 if side == 0
Square
  .new(side,display_char)
  .generate
end

print 'Enter the side length:'
side = gets.to_i
print 'Which caracter is to display:'
display_char = gets.chomp
display(side,display_char)
