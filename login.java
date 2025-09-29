import java.util.Scanner;
public class login {
    public static void main(String[] args) {
        String user,pass;
        String username,password;
        try (Scanner scan = new Scanner(System.in)) {
            System.out.println("Sign in page \n");
            System.out.println("Enter Username : ");
            user = scan.nextLine();
            System.out.println("Enter Password : ");
            pass = scan.nextLine();
            System.out.println("Sign in Succec \n");

            System.out.println("login page \n");
            System.out.println("Enter Username : ");
            username = scan.nextLine();
            System.out.println("Enter Password : ");
            password = scan.nextLine();
        }
        if (username == null ? user == null : username.equals(user)) {
            if (password == null ? pass == null : password.equals(pass)) {
                System.out.println("Login Succec");
            }
        }
        else if (!username.equals(user)) {
            System.out.println("Login Fail");
        }
    }
}
// line 20,21=
// // int time = 20;
// if (time < 18) {
//   System.out.println("Good day.");
// } else {
//   System.out.println("Good evening.");
// }