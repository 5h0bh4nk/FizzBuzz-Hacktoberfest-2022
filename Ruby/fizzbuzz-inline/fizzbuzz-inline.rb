# Simple example of FizzBuzz inline with ruby 
# Author: @Tony133

1.upto(100) { |n| puts "#{'Fizz' if n % 3 == 0}#{'Buzz' if n % 5 == 0}#{n if n % 3 != 0 && n % 5 != 0}" }
