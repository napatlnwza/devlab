import java.util.Scanner;

public class tanalphabet {
    public static void main(String[] args) {
        String text,tan;
        try (Scanner s = new Scanner(System.in)) {
            text = s.nextLine();
            tan = s.nextLine();
        }
        char target = tan.charAt(0); 
        String result = "";
        for (int i = 0; i < text.length(); i++) {
            char c = text.charAt(i);
            if (c == target) {
                result += '*';
            } else {
                result += c;
            }
        }
        System.out.println(result);
    }
}
