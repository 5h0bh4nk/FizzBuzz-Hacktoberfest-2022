# Basic FizzBuzz with Julia
# Author: satrio-pamungkas

for num in 1:100
    if num % 3 == 0 && num % 5 == 0
        println("FizzBuzz")
    elseif num % 3 == 0
        println("Fizz")
	elseif num % 5 == 0
        println("Buzz")
    else
        println(num)
    end
end
