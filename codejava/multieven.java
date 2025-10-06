import java.util.Scanner;
public class multieven {
    public static void main(String[] args) {
        int even=1,nnum,num;
        try (Scanner enter = new Scanner(System.in)) {
            num=enter.nextInt();
            for (int i=0;i<num;i++) {
                nnum=enter.nextInt();
                if (nnum % 2 == 0) {
                    even*=nnum;
                }
            }
            System.out.print(even);
        }
    }
}
