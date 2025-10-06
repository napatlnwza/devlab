import java.util.Scanner;
public class firstalphabet {
    @SuppressWarnings("UnnecessaryContinue")
    public static void main(String[] args) {
        String text;
        try (Scanner enter = new Scanner(System.in)) {
            text=enter.nextLine();
        }
        for (int i=0;i<text.length();i++) {
            char check = text.charAt(i);
            if (check == ' ') {
                continue;
            }
            else if (check != ' ') {
                System.out.println(check);
                break;
            }
        }
    }
}
