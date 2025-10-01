// https://www.borntodev.com/devlab/task/355
import java.util.Scanner;
public class sum {
    public static void main(String[] args) {
        int guae;
        try (Scanner sc = new Scanner(System.in)) {
            guae = sc.nextInt();
        }
        int sum=0;
        for (int i=1;i<=guae;i++) {
            ++i;
            sum+=(int) Math.pow(i,2);
        }
        System.out.println(sum);
    }
}