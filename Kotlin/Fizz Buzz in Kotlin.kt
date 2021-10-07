 //Fizz Buzz in Kotlin
// Author : @hiteshv01

fun main(args: Array<String>){
    for (x in 1..100){
        when {
            (x % 3 == 0 && x % 5 == 0) -> println("FizzBuzz")
            x % 3 == 0 -> println("Fizz")
            x % 5 == 0 -> println("Buzz")
            else -> println("$i")
        }
    }
}
