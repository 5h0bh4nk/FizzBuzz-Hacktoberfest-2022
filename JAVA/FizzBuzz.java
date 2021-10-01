import java.util.TreeMap;

public class FizzBuzz {
	public static void main(String[] args) {
		TreeMap<Integer, Object> map = new TreeMap<>();
		for (int i = 1; i <= 100; i++) {
			map.put(i, i);
			if (i % 3 == 0)
				map.put(i, "fizz");
			if (i % 5 == 0)
				map.merge(i, "buzz",
						(a, b) -> a instanceof String ? ((String) a).concat((String) b) : b);
		}
		for (int i : map.keySet())
			System.out.println(map.get(i));
	}
}
