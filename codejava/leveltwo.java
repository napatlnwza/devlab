import java.util.Scanner;
public class leveltwo {
    static double ftoc (double cel) {
        return (cel * 9/5) + 32;
    }
    public static void main(String[] args) {
        double ce;
        try (Scanner s = new Scanner(System.in)) {
            ce = s.nextDouble();
        }
        System.out.println("Fahrenheit " + ftoc(ce));
    }
}