import java.util.Scanner;
public class sumthree {
    public static void main(String[] args) {
        int num,nloop,sum=0;
        try (Scanner scan = new Scanner(System.in)) {
            nloop=scan.nextInt();
            for (int i=1;i<=nloop;i++) {
                num=scan.nextInt();
                if (num%3 == 0) {
                    sum+=num;
                }
            }
            System.out.println(sum);
        }
    }
}