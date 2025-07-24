import java.util.Scanner;

public class FailingGrades {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);

        int T = sc.nextInt();

        while (T-- > 0) {
            int N = sc.nextInt();
            int sum = 0;
            boolean scholarship = true;

            for (int i = 1; i <= N; i++) {
                sum += sc.nextInt();
                if ((double) sum / i < 40) {
                    scholarship = false;
                }
            }

            System.out.println(scholarship ? "Yes" : "No");
        }

        sc.close();

	}
    
}
