# To make a empty square
class Square
  SYMBOL = '#'

  def initialize(side)
    @side = side
    @gap_length = @side - 2
  end

  def generate
    print_first_last_line
    return if @side < 2

    print_middle_lines
    print_first_last_line
  end

  private

  def print_first_last_line
    print SYMBOL * @side
    print "\n"
  end

  def print_middle_lines
    @gap_length.times { puts SYMBOL + ' ' * @gap_length + SYMBOL }
  end
end

print 'side length:'
side = gets.to_i

Square
  .new(side)
  .generate
