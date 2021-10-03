// Basic FizzBuzz with Vintage Language (Pascal)
// Author : Muhammad Raihan Satrio

program basic_fizz_buzz(output);
var
  i: integer;
begin
  for i := 1 to 100 do
    if i mod 3 = 0 then
      writeln('Fizz')
      // Multiple of 3
    else if i mod 5 = 0 then
      writeln('Buzz')
      // Multiple of 5
    else if i mod 15 = 0 then
      writeln('FizzBuzz')
      // Multiple of 3 and 5
    else
      writeln(i)
end.
