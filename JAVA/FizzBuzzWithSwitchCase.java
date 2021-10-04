import java.util.stream.IntStream;

public class FizzBuzzWithSwitchCase {

    private static final int IS_FIZZBUZZ       = 15;
    private static final int IS_BUZZ           = 5;
    private static final int IS_FIZZ           = 3;
    private static final int IS_SOMETHING_ELSE = 99;

    private final static int[] DIVIDERS = { 3, 5, 15 };

    public static void main(String[] args) {

        IntStream.rangeClosed(1, 100).boxed().forEach(f -> processFizzBussWithSwitchCase(f));

    }

    private static void processFizzBussWithSwitchCase(int number) {

        int whatIsThisNumber = IS_SOMETHING_ELSE;

        for (int divider : DIVIDERS) {
            if (number % divider == 0)
                switch (divider) {
                    case IS_FIZZBUZZ -> whatIsThisNumber = IS_FIZZBUZZ;
                    case IS_BUZZ -> whatIsThisNumber = IS_BUZZ;
                    case IS_FIZZ -> whatIsThisNumber = IS_FIZZ;
                }
        }

        switch (whatIsThisNumber) {
            case IS_FIZZBUZZ -> System.out.println("FizzBuzz");
            case IS_BUZZ -> System.out.println("Buzz");
            case IS_FIZZ -> System.out.println("Fizz");
            default -> System.out.println(number);
        }

    }

}
