import java.util.Scanner;
public class foursq {
    public static void main(String[] args) {
        int l,w;
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Enter long : ");
            l = scan.nextInt();
            System.out.println("Enter Wide : ");
            w = scan.nextInt();
        }
        System.out.println("Ans is " + (l*w));
    }
}
