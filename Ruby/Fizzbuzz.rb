for num in (1..100) do
    if num.modulo(15)==0
        puts "FizzBuzz"
    elsif num.modulo(5)==0
        puts "Buzz"
    elsif num.modulo(3)==0
        puts "Fizz"
    else 
        puts num
    end
end