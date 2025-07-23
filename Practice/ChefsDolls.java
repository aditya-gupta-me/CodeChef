import java.util.Scanner;

public class ChefsDolls {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            // size of array
            int n = sc.nextInt();

            int result = 0;
            for (int j = 0; j < n; j++) {
                // xor input directly
                result ^= sc.nextInt();
            }

            System.out.println(result);
        }

        sc.close();
    }
}