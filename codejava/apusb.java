import java.util.Scanner;
public class apusb {
  public static void main(String[] args) {
    try (Scanner sc = new Scanner(System.in)) {
      System.out.println("Enter Number1 : ");
      int a = sc.nextInt();
      System.out.println("Enter Number2 : ");
      int b = sc.nextInt();
      System.out.println("Ans = " + (a+b));
    }
  }
}