import java.util.Scanner;

public class ChefBakesCake2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {
            // total no of ingredients
            int n = sc.nextInt();

            // needed ingredients
            int[] a = new int[n];

            // already have this amount of ingredients
            int[] b = new int[n];

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            // loop required to check for the missing ingredients

            int result = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    result += a[i] - b[i];
                }
            }

            System.out.println(result);

        }

        sc.close();
    }
}