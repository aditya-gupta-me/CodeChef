import java.util.Scanner;
public class CloudWatching{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b= sc.nextInt();
        System.out.println("A =" + a);
        System.out.println("B =" + b);

        int pred = a * 3;

        System.out.println("Pred: " + pred);

        if(pred <= b){
            System.out.println("Rain");
        }else{
            System.out.println("Dry");
        }

        sc.close();
    }
}