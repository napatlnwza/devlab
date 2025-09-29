import java.util.Scanner;
public class GuessNumber {
    public static void main(String[] args) {
        int num;
        try (Scanner scan = new Scanner(System.in)) {
            while (true) { 
                System.out.println("Enter Num : ");
                num = scan.nextInt();
                if (num == 26) {
                    System.out.println("correc");
                    break;
                }
                else if (num < 26) {
                    System.out.println("Too little");
                }
                else if (num > 26) {
                    System.out.println("Too much");
                }
            }
        }
    }
}
// Ans 26 