import java.util.Scanner;
public class gpa {
    public static void main(String[] args) {
        int nsubject;
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Enter Number of subjects : ");
            nsubject = scan.nextInt();
        
        int[] score = new int[nsubject];
        double[] credit = new double[nsubject];

        for (int i=0;i<nsubject;i++) {
            System.out.println("Enter score " + (i+1) + " : ");
            score[i] = scan.nextInt();
            System.out.println("Enter Credit Subject " + (i+1) + " : ");
            credit[i] = scan.nextDouble();
        }
        int sumscore=0;
        double sumcredit=0;
        for (int i=0;i<nsubject;i++) {
            sumscore+=score[i];
            sumcredit+=credit[i];
        }
        double avr = sumscore/sumcredit;
        System.out.printf("Average is %.2f" ,avr);
        }
    }
}
