import java.util.Arrays;
import java.util.Scanner;

public class MarbleCollector {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		while(t-- > 0){
		    int n = sc.nextInt();
		    int m = sc.nextInt();
		    
		    int[] container = new int[m];
		    Arrays.fill(container, 0);
		    
		    int marbles = 0;
		    
		    for(int i=0; i<n; i++){
		        marbles = sc.nextInt();
		        container[marbles-1] = 1;
		    }
		    
		    int count = 0;
		    
		    for(int i=0; i<m; i++){
		        if(container[i] == 0){
		            count++;
		        }
		    }
		    System.out.println(count);
		}
		
		sc.close();

	}
    
}
