// https://programming.in.th/tasks/0001
import java.util.Scanner;
public class grading {
    public static void main(String[] args) {
        int score,scoremid,scorefinal,sum;
        try (Scanner enter = new Scanner(System.in)) {
            score=enter.nextInt();
            scoremid=enter.nextInt();
            scorefinal=enter.nextInt();
            sum=score+scoremid+scorefinal;
            if (sum >= 80 && sum <=100) {
                System.out.println("A");
            }
            else if (sum >=75 && sum <= 79) {
                System.out.println("B+");
            }
            else if (sum >= 70 && sum <= 74) {
                System.out.println("B");
            }
            else if (sum >= 65 && sum <= 69) {
                System.out.println("C+");
            }
            else if (sum >= 60 && sum <= 64) {
                System.out.println("C");
            }
            else if (sum >= 55 && sum <= 59) {
                System.out.println("D+");
            }
            else if (sum >= 50 && sum <= 54) {
                System.out.println("D");
            }
            else if (sum < 50 && sum >= 0) {
                System.out.println("F");
            }
        }
    }
}