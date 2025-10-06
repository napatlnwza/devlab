import java.util.Scanner;
public class plus {
    public static void main(String[] args) {
        int nloop;
        int count=0;
        try (Scanner enter = new Scanner(System.in)) {
            nloop=enter.nextInt();
            int num;
            for (int i=0;i<nloop;i++) {
                num=enter.nextInt();
                if (num>0) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}