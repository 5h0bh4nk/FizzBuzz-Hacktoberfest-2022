function fizzBuzz(n) {
    function fizzBuzzRecursive(n) {
      //create results array
      //create base case for when n === 1
      //recurse and push value to array
      var results = [];
      if (n === 1) {
        return '1';
      } else {
        if (n % 3 === 0 && n % 5 === 0) {
          results.push('FizzBuzz');
        } else if (n % 5 === 0) {
          results.push('Buzz');
        } else if (n % 3 === 0) {
          results.push('Fizz');
        } else {
          results.push(''+ n);
        }
        return results.concat(fizzBuzzRecursive(n - 1));
      }
    }
    
    return fizzBuzzRecursive(n).reverse();
  };
  
  console.log(fizzBuzz(15));