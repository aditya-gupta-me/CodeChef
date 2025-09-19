import java.util.Scanner;

public class DNASTORAGE {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        // to consume newline after t
        sc.nextLine();

        while (t-- > 0) {
            int n = sc.nextInt();
            // to consume newline after n
            sc.nextLine();

            String s = sc.nextLine();

            String[] arr = new String[n / 2];

            int idx1 = 0;
            int idx2 = 1;

            for (int i = 0; i < n; i += 2) {
                String pair = s.charAt(i) + "" + s.charAt(i + 1);
                arr[i / 2] = pair;
            }

            String newStr = "";
            for (String pair : arr) {
                if (pair.equals("00")) {
                    newStr += "A";
                } else if (pair.equals("01")) {
                    newStr += "T";
                } else if (pair.equals("10")) {
                    newStr += "C";
                } else if (pair.equals("11")) {
                    newStr += "G";
                }
                // System.out.println(pair);
            }

            System.err.println(newStr);
        }

        sc.close();
    }
}