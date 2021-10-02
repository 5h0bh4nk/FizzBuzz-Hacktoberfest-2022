// FizzBuzz implementation in Rust Programming Language
// Author: @QaidVoid

fn fizzbuzz() {
    for n in 1..=100 {
        let val = match (n % 3, n % 5) {
            (0, 0) => "FizzBuzz".into(),
            (0, _) => "Fizz".into(),
            (_, 0) => "Buzz".into(),
            _ => n.to_string()
        };

        if n == 100 {
            print!("{}", val);
        } else {
            print!("{}, ", val);
        }
    }
}

fn main() {
    fizzbuzz();
}
