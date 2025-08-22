import java.util.Scanner;

public class program257 {

    public static void display(String str)
    {
        int iCnt = 0;
        for(iCnt=0; iCnt<str.length(); iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }
    }

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter your name :: ");
        str = sObj.nextLine();

        display(str);
        sObj.close();
    }
}