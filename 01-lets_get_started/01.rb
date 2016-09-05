# To make a empty square
class Square 
  def initialize(side)
    @side = side
  end

  def generate
    print_first_last_line

    return if @side < 2
    print_middle_lines
    print_first_last_line
  end

  private
  def print_first_last_line
    print '#'* @side
    print "\n"
  end

  def print_middle_lines
    @gap_length = @side - 2
    @gap_length.times { puts '#' + ' ' * @gap_length + '#' }
  end
end

print 'side_length:'
side = gets.to_i
Square
  .new(side)
  .generate
