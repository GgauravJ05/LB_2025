import java.util.Scanner;

public class program254 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();
        System.out.println("your name is = " +str);
        sObj.close();
    }
}
