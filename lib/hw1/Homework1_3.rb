class Guesser
  attr_reader :not_finished

  def initialize
    @upper_bound = 100
    @lower_bound = 1
    @guesses = 0
    @not_finished = true
  end

  def guess
    (@upper_bound + @lower_bound)/2
  end

  def ask_question
    unless @guesses > 7
      puts "Is #{guess} greater than your number? (y,n,[c]orrect)"
      @guesses += 1
      answer = gets.chomp.downcase[0]
      case answer
      when "y"
        @upper_bound = guess
      when "n"
        @lower_bound = guess
      when "c"
        puts "I win."
        @not_finished = false
      end
    else
      puts "You're lying."
      @not_finished = false
    end
  end
end

g = Guesser.new
while g.not_finished
  g.ask_question
end
