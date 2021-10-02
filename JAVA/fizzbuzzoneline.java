public class fizzbuzzoneline {
    public static void main(String[] args) {
        for (int i = 1; i <= 100; i++)
            System.out.println((i % 15 == 0) ? "FizzBuzz" : (i % 5 == 0) ? "Buzz" : (i % 3 == 0) ? "Fizz" : i);

    }
}
