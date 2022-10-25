
const play = (n) => {
    if(n % 3 === 0 && n % 5 === 0) {
      console.log('FizzBuzz');
      return
    }
    
    if (n % 3 === 0) {
      console.log('Fizz');
    }
    
    if (n % 5 === 0) {
      console.log('Buzz');
    }
    
    console.log(n);
  };
  
  const fizzBuzz = (n) => {
    Array.from({ length: n }, (_, i) => i + 1).forEach(play);
  };
