/**
 * 
 */
import java.util.*;

/**
 * @author safouene
 *
 */
public class FizzBuzz {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		for (int i = 0; i < 100; i++) {
			if (i%3==0) {
				System.out.print("Fizz");
				if (i%5==0) {
					System.out.print("Buzz");
				}
				System.out.print("\r");
				continue;
			} 
			if (i%5==0) {
				System.out.println("Buzz");
				continue;
			}
			
			System.out.println(i);

		}


	}

}