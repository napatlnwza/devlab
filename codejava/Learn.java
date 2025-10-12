
import java.util.Scanner;
class Roblox{

    public double hp;
    public int speed;
    public static void walk() {
        System.out.println("walk");
    }
}

public class Learn {
    public static void main(String[] args) {
        Roblox.walk();



        int n;
        try (Scanner s = new Scanner(System.in)) {
            int max=0;
            int count=0;
            while (true) {
                n=s.nextInt();
                if (n>max) {
                    max=n;
                    count=1;
                }
                else if (n==max) {
                    count++;
                }
                if (n==0) break;
            }
            System.out.println(max + " " + count);
        }




        
        double x1,y1,x2,y2,x3,y3;
        try (Scanner s = new Scanner(System.in)) {
            x1=s.nextDouble();
            y1=s.nextDouble();
            x2=s.nextDouble();
            y2=s.nextDouble();
            x3=s.nextDouble();
            y3=s.nextDouble();
            double s1,s2,s3;
            s1=Math.sqrt(Math.pow((x2-x1), 2) + Math.pow((y2-y1),2));
            s2=Math.sqrt(Math.pow((x3-x1) , 2) + Math.pow((y3-y1),2));
            s3=Math.sqrt(Math.pow((x2-x3) , 2) + Math.pow((y2-y3) ,2));
            double area;
            double side;
            side=(s1+s2+s3)/2;
            area=Math.sqrt(side*(side-s1)*(side-s2)*(side-s3));
            System.out.printf("%.2f" ,area);
            
        }
    }

}
