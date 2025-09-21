import java.util.Scanner;

public class program256 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();

        int iCnt =0;
        for(iCnt =0;iCnt<str.length();iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
        sObj.close();
    }

}
