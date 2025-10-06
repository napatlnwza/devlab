import java.util.Scanner;
public class countalphabet {
    public static void main(String[] args) {
        String text;
        try (Scanner s= new Scanner(System.in)) {
            text=s.nextLine();
        }
        int count=0;
        text=text.toLowerCase();
        for (int i=0;i<text.length();i++) {
            char check=text.charAt(i);
            if (check== 'a' || check == 'e' || check == 'i' || check=='o' || check=='u') {
                count++;
            }
        }
        System.out.println(count);
    }
}
