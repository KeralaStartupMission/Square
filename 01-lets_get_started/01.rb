class Square
	def initilaize(char,side)
		@side = side
		@char = char
		
	end
	def display
	puts"enter the side of metrix"
	@side = gets.to_i	
	puts"enter your character"
	print"enter a valid number"
    end
	def first_last_line
	puts @char * @side 
	end
	def middle_line
	repet = @side - 2
	middle = @char + " " * repet + @char
		#if repet < 0
		#puts @side * char
	#Selse
	repet.times do puts middle 	
	end	
end
end
S = Square.new
  S.display
  S.first_last_line
  S.middle_line
  S.first_last_line
end




