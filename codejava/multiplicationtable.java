import java.util.Scanner;
public class multiplicationtable {
    public static void main(String[] args) {
        int koon,koonend;
        try (Scanner enter = new Scanner(System.in)) {
            System.out.println("Enter multiplicationble : ");
            koon = enter.nextInt();
            System.out.println("Enter End multiplication : ");
            koonend = enter.nextInt();
        }
        int ans;
        for (int i=1;i<=koonend;i++) {
            ans = koon * i;
            System.out.println(koon + " * " + i +" = " + ans);
        }
    }
}