import java.util.Scanner;
import java.util.HashSet;
public class Average {
    public static void main(String[] args) {
        HashSet<Integer> n = new HashSet<>();
        int num;
        try (Scanner sc = new Scanner(System.in)) {
            num=sc.nextInt();
            if (num == 0) {
                System.out.println(0);
            }
            else {
                for (int i=0;i<num;i++) {
                    n.add(sc.nextInt());
                }
            }
        }
        int sum = 0;
        for (int i : n) {
            sum+=i;
        }
        double avr;
        avr = (double)sum/num;
        System.out.printf("%.2f" ,avr);
    }
}
