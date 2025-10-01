import java.util.Scanner;
public class bmi {
    public static void main(String[] args) {
        double heigthm,weigth,bmi,heigth;
        try (Scanner m = new Scanner(System.in)) {
            System.out.println("Enter Weigth : ");
            weigth = m.nextDouble();
            System.out.println("Enter Heigth  : ");
            heigth = m.nextDouble();
        }
        heigthm=heigth/100;
        bmi=weigth/(Math.pow(heigthm,2));
        if (bmi < 18.5) {
            System.out.printf("Thin : %.2f" ,bmi);
        }
        else if (bmi >=18.5 && bmi <= 22.9) {
            System.out.printf("Normal : %.2f" ,bmi);
        }
        else if (bmi >= 23 && bmi <=24.9) {
            System.out.printf("Normal++ : %.2f" ,bmi);
        }
        else if (bmi >=25 && bmi <=29.9) {
            System.out.printf("Fat-- : %.2f" ,bmi);
        }
        else if (bmi >= 30) {
            System.out.printf("Fat : %.2f" ,bmi);
        }
    }
}