// Example of fizzbuzz using an map loop
// Author: @augustoscher

const fillRange = (start, end) => {
  return Array(end - start + 1)
    .fill()
    .map((_item, index) => start + index);
};

const isMultipleOf3 = (value) => value % 3 === 0;
const isMultipleOf5 = (value) => value % 5 === 0;

const fizzBuzz = (i) => {
  const sequence = fillRange(1, i);

  const result = sequence.map(number => {
    if (isMultipleOf3(number) && isMultipleOf5(number))
      return "FizzBuzz"

    if (isMultipleOf3(number))
      return "Fizz";

    if (isMultipleOf5(number))
     return "Buzz";

    return number;
  })

  result.forEach(item => console.log(item))
};

fizzBuzz(100);
