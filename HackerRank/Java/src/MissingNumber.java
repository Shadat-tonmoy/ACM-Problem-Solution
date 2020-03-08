import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class MissingNumber {
	public static void main(String args[]) {
		//System.out.println("He");
		int i, j, k, l, m, n, a, b, c, key, value;
		Map<Integer, Integer> freq1, freq2;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		//System.out.println("entered" + n);
		freq1 = new HashMap<Integer, Integer>();
		freq2 = new HashMap<Integer, Integer>();
		for (i = 0; i < n; i++) {

			a = sc.nextInt();
			key = new Integer(a);
			value = new Integer(0);
			if (freq1.get(new Integer(a)) == null) {
				freq1.put(key, value);
			} else {
				value = freq1.get(key).intValue();
				value++;
				freq1.put(key, value);
			}
		}
		m = sc.nextInt();

		for (i = 0; i < m; i++) {

			a = sc.nextInt();
			key = new Integer(a);
			value = new Integer(0);
			if (freq2.get(new Integer(a)) == null) {
				freq2.put(key, value);
			} else {
				value = freq2.get(key).intValue();
				value++;
				freq2.put(key, value);
			}
		}

		for (Integer it : freq1.keySet()) {
			value = freq1.get(it);
			int value2 = freq2.get(it);
			//System.out.println(value + " " + value2);
			if (value < value2) {
				System.out.println(it.intValue());
			}

		}

	}

}
