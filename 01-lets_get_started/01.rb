# To make a empty square
class Square
  def initialize(side)
    @side = side
    @gap_length = side - 2
  end

  def first_last_line
    @side.times { print '#' }
    print "\n"
  end

  def middle_line
    @gap_length.times { puts '#' + ' ' * @gap_length + '#' }
  end

  def generate
    first_last_line
    unless @side <= 2
      middle_line
      first_last_line
    end
  end
end
print 'Enter the side length:'
side = gets.to_i
square = Square.new(side)
square.generate.to_s
