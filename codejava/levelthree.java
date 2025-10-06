import java.util.Scanner;
public class levelthree {
    public static void main(String[] args) {
        String text;
        try (Scanner scan = new Scanner(System.in)) {
            text = scan.nextLine();
        }
        int pos=0;
        char[] loop = new char[text.length()];
        for (int i=0;i<text.length();i++) {
            char check = text.charAt(i);
            if (check == ' ') {
                continue;
            }
            else if (check != ' ') {
                for (int j=i+1;j<text.length();j++) {
                    if (check == text.charAt(j)) {
                        boolean add = false;
                        for (int k=0;k<pos;k++) {
                            if (loop[k] == check) {
                                add = true;
                                break;
                            }
                        }
                        if (!add) {
                            loop[pos] = check;
                            pos++;
                        }
                        break;
                    }
                }
            }
        }
        for (int i=0;i<pos;i++) {
            System.out.print(loop[i] + " ");
        }
    }
}