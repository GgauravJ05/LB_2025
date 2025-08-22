import java.util.Scanner;

public class program254 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);  // Fixed typo: newn → new
        String str = null;                      // Fixed: NULL → null

        System.out.println("Enter your name :: ");
        str = sObj.nextLine();

        System.out.println("Your name is = " + str);
        sObj.close();
    }
}