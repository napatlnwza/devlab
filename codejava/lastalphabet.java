import java.util.Scanner;
public class lastalphabet {
    public static void main(String[] args) {
        String text;
        try (Scanner s = new Scanner(System.in)) {
            text=s.nextLine();
        }
        char last=text.charAt(text.length() - 1);
        System.out.println(last);
    }
}