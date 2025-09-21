import java.util.Scanner;

public class program255 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();
        System.out.println("your name is = " +str);
        System.out.println("length of your name is = "+str.length());
        sObj.close();
    }
}
