puts "Enter your first name:"
name = gets.chomp
puts "Enter the name of your friend:"
friend_name = gets.chomp
puts "What is your friend's gender?"
gender = gets.chomp
pronoun = gender == 'm' ? "him" : "her"
puts "What is your friend's age?"
age = gets.chomp.to_i
age_comment = case
when age < 12
  "Next year you will be #{age+1}."
when age == 17
  "Next year you will be able to vote."
when age > 70
  "I hope you are enjoying retirement."
end

puts "Dear #{name},"
puts "\tHow are you? How have you been? I am fine. I miss you. Have you seen #{friend_name} recently? If you see #{friend_name} tell #{pronoun} to call me. I heard you just had a birthday and you're #{age} years old. #{age_comment}"
puts "Yours sincerely,"
puts "\n\nWill C."