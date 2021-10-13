//fizzbuzz solution using bitmasking
//Author: @SauravKumarJhaNITW

var values = [undefined, "Fizz", "Buzz", "FizzBuzz"],
  //here m represent mask
  m = 810092048, //11 00 00 01 00 10 01 00 00 01 10 00 01 00 00 (using predefined masks for numbers 0 to 15)
  c = 0;

for (let i = 1; i <= 100; i++) {
  //will produce num in range of 0 to 3
  c = m & 3;

  //if c is zero => values[c] is undefined, then i will be printed
  //else if c is 1, 2 or 3 then respective word at that index will be printed
  console.log(i, values[c] || i);
  m = (m >> 2) | (c << 28);
}
