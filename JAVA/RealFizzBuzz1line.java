import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class RealFizzBuzz1line {
    public static void main(String[] args) {
        IntStream.rangeClosed(1, 100).boxed().collect(Collectors.toList()).forEach((i) -> System.out.println((i % 15 == 0) ? "FizzBuzz" : (i % 5 == 0) ? "Buzz" : (i % 3 == 0) ? "Fizz" : i));
    }
}