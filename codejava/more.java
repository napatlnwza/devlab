import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
public class more {
    public static void main(String[] args) {
        ArrayList<Integer> num = new ArrayList<>();
        try (Scanner scan = new Scanner(System.in)) {
            for (int i=0;i<3;i++) {
                num.add(scan.nextInt());
            }
        }
        Collections.sort(num);
        System.out.println("Min = " + num.get(0));
        System.out.println("Max = " + num.getLast());
    }
}