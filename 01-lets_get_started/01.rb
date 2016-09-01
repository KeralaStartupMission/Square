# To make a empty square
class Square
  def initialize(side)
    @side = side
    @gap_length = side - 2
  end

  def print_first_last_line
    @side.times { print '#' }
    print "\n"
  end

  def print_middle_lines
    @gap_length.times { puts '#' + ' ' * @gap_length + '#' }
  end

  def generate
    print_first_last_line

    return if @side < 2
        print_middle_lines
        print_first_last_line
  end
end

print 'Enter the side length:'
side = gets.to_i
Square
  .new(side)
  .generate
