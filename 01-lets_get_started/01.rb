# To make a empty square
class Square
  SYMBOL = '#'

  def initialize(side)
    @side = side
    @gap_length = @side - 2
    @middlelines = []
  end

  def generate
    if @gap_length > 0
      display = [first_last_lines, middle_lines, first_last_lines]
    elsif @gap_length.zero?
      display = [first_last_lines, middle_lines]
    else
      display = first_last_lines
    end
  end

  def to_s
    display
  end

  private

  def first_last_lines
    "#{SYMBOL * @side}\n"
  end

  def middle_lines
    @rows = 0
    while @rows <= @gap_length
      @middlelines[@rows] = SYMBOL + ' ' * @gap_length + SYMBOL
      @rows += 1
    end
    @middlelines
  end
end

print 'side length:'
side = gets.to_i

puts Square
  .new(side)
  .generate
