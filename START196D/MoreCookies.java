import java.util.Arrays;
import java.util.Scanner;

public class MoreCookies {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            // no of Alice's friends
            int n = sc.nextInt();

            // no of cookies Alice bought initially
            int c = sc.nextInt();

            int[] cookies = new int[n];

            for (int i = 0; i < n; i++) {
                cookies[i] = sc.nextInt();
            }

            Arrays.sort(cookies);

            int count = c;

            if (c <= cookies[0]) {
                count += (cookies[0] - count);
            }

            for (int i = 0; i < n; i++) {

                if (count == cookies[i]) {
                    count++;
                }
            }

            System.out.println((Math.max(count, c) - Math.min(count, c)));

        }

        sc.close();
    }
}