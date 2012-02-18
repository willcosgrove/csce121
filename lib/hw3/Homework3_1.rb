# Bulls and Cows
require 'action_pack'
require 'action_view'
require 'pry'

class Gamemaster
  include ActionView::Helpers::TextHelper
  def initialize
    pick_numbers
    @solved = false
    @guesses = 0
  end

  def solved?
    @solved
  end

  def pick_numbers
    @numbers = []
    4.times do
      @numbers << rand(0..9).to_s
    end
  end

  def check(guess)
    @guesses += 1
    guess = guess.split("")
    throw IncorrectGuess if guess.size != 4
    bulls = 0
    cows = 0
    guess.each_with_index do |num, index|
      # binding.pry
      if @numbers[index] == num
        bulls += 1
      elsif @numbers.include?(num)
        cows += 1
      end
    end
    if bulls == 4
      @solved = true
      puts "You guessed it!  And in only #{pluralize(@guesses, 'guess')}!  What a pro."
    else
      puts "#{pluralize(bulls, 'bull')} and #{pluralize(cows, 'cow')}"
    end
  end 
end

gm = Gamemaster.new

while !gm.solved? do
  puts "Enter your guess"
  guess = gets.chomp
  gm.check(guess)
end