import java.util.Scanner;
public class evenodd {
    public static void main(String[] args) {
        int num;
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Enter Num : ");
            num = scan.nextInt();
        }
        if (num % 2 == 0) {
            System.out.println(num + " is Even");
        }
        else if (num % 2 != 0) {
            System.out.println(num + " is  Odd");
        }
    }
}