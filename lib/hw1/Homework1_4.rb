puts "Enter a"
a = gets.chomp.to_f
puts "Enter b"
b = gets.chomp.to_f
puts "Enter c"
c = gets.chomp.to_f

puts (-b + (Math.sqrt(b**b - 4*a*c))) / 2*a
puts (-b - (Math.sqrt(b**b - 4*a*c))) / 2*a