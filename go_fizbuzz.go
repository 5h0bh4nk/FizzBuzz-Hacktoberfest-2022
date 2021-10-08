
 //Fizz Buzz in go language 
// Author : @hiteshv01


package main

import "fmt"

func main() {
    i := 1
    for i <= 100 {
        if (i % 3 == 0 && i % 5 == 0) {
            fmt.Println("Fizzbuzz")
        } else if (i % 3 == 0) {
            fmt.Println("Fizz")
        } else if (i % 5 == 0) {
            fmt.Println("Buzz")
        } else {
            fmt.Println(i)
        }
        i = i + 1
    }
}
