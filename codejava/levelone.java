import java.util.Scanner;
public class levelone {
    public static void main(String[] args) {
        int start = 0,sum=0;
        int[] num = new int[start];
        try (Scanner scan = new Scanner(System.in)) {
            start = scan.nextInt();
            for (int i=0;i<start;i++) {
                num[i] = scan.nextInt();
            }
        }
        for (int i=0;i<start;i++) {
            if ( num[i] % 2 == 0) {
                sum+=num[i];
            }
        }
        System.out.println(sum);
    }
}