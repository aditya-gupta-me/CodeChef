import java.util.Scanner;

public class SellingSandwiches {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);

        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();

        System.out.print((A) - (B + C));

        sc.close();

    }

}
