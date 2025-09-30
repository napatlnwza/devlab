// https://www.borntodev.com/devlab/task/1198
import java.util.Scanner;
public class texttoascii {
    public static void main(String[] args) {
        String text;
        try (Scanner enter = new Scanner(System.in)) {
            text=enter.nextLine();
        }
        if (text == null || text.isEmpty()) {
            System.out.println(0);
        }
        else {
            for (int i=0;i<text.length();i++) {
                char  a = text.charAt(i);
                if (a == ' ') {
                    System.out.print("/ ");
                }
                else {
                    System.out.print((int)a + " ");
                }
            }
        }
    }
}