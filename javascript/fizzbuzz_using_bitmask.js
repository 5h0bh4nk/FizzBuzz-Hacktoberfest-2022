//fizzbuzz solution using bitmasking
//Author: @SauravKumarJhaNITW

var values = [undefined, "Fizz", "Buzz", "FizzBuzz"],
  m = 810092048,
  c = 0;

for (let i = 1; i <= 100; i++) {
  c = m & 3;

  console.log(i, values[c] || i);

  m = (m >> 2) | (c << 28);
}
