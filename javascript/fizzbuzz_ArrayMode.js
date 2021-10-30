// Author @Sideeq12

// Create fizzbuzz in single line and Array


const fizz = "FIZZ"
const buzz = "buzz"
const fizzbuzz = "fizzBuzz"
let list = []
const FizzBuzz = (len)=>{
    for (let i =0; i<len; i++){
        if(i%5==0 && i%3==0){
            process.stdout.write("FIZZBUZZ"+ " ")
            list.push(fizzbuzz)
        }else if(i%5==0){
            process.stdout.write("FIZZ ")
            list.push(fizz)
        }else if(i%3==0){
            process.stdout.write("BUZZ ")
            list.push(buzz)
        }
    }
}

let numberSample = 1000
FizzBuzz(numberSample)
console.log("\n", list)