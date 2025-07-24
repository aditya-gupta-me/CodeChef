import java.util.Scanner;

public class SugarLimit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            // no of snacks
            int n = sc.nextInt();

            // read tastiness values
            int[] tastiness = new int[n];
            for (int i = 0; i < n; i++) {
                tastiness[i] = sc.nextInt();
            }

            // read sugar quantities
            int[] sugar = new int[n];
            for (int i = 0; i < n; i++) {
                sugar[i] = sc.nextInt();
            }

            // find maximum satisfaction
            long maxSatisfaction = findMaxSatisfaction(tastiness, sugar, n);
            System.out.println(maxSatisfaction);
        }

        sc.close();
    }

    private static long findMaxSatisfaction(int[] tastiness, int[] sugar, int n) {

        // start with 0 (choosing L=0 and eating nothing)
        long maxSatisfaction = 0;

        // try all possible values of L from 0 to 100
        // since sugar quantities are at most 100, it should not go beyond that
        for (int L = 0; L <= 100; L++) {
            long currentSatisfaction = calculateSatisfaction(tastiness, sugar, n, L);
            maxSatisfaction = Math.max(maxSatisfaction, currentSatisfaction);
        }

        return maxSatisfaction;
    }

    private static long calculateSatisfaction(int[] tastiness, int[] sugar, int n, int L) {
        
        // for a given L, we want to eat only snacks with positive tastiness
        // and sugar <= L (greedy approach)
        long totalTastiness = 0;

        for (int i = 0; i < n; i++) {
            // Only eat snack if it has sugar <= L and positive tastiness
            if (sugar[i] <= L && tastiness[i] > 0) {
                totalTastiness += tastiness[i];
            }
        }

        // Satisfaction = total tastiness - L
        return totalTastiness - L;
    }
}