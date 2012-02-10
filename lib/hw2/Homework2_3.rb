require 'pry'

puts "Find all primes upto:"
upto = gets.chomp.to_i

numbers = (2..upto).to_a

# binding.pry

numbers.each do |num|
  next if num =~ /P/
  i = numbers.index(num)
  # binding.pry
  (numbers.size/num).times do |time|
    break if i+(num*(time+1)) > numbers.size
    numbers[i+(num*(time+1))] = "P#{numbers[i+(num*(time+1))]}"
  end
end

numbers.delete_if{|x| x=~ /P/}
p numbers
