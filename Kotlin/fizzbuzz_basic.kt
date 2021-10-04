// Basic FizzBuzz with Language (Kotlin)
// Author : fajarmuhamad616

fun main() {
    var i : Int
    for (i in 0..99){
        when {
            i%3==0 && i%5==0 -> {
                print("FizzBuzz" + "\n")
            }
            i%3==0 -> {
                print("Fizz" + "\n")
            }
            i%5==0 -> {
                print("Buzz" + "\n")
            }
            else -> {
                print("$i \n")
            }
        }
    }
}
