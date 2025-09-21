import java.util.Scanner;
public class program243 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in); // Non Buffered Approach to accept input from user

        int iNo1,iNo2 =0;
        int iAns = 0;

        System.out.println("Enter First Number\n");
        iNo1 = sObj.nextInt();
        System.out.println("Enter Second Number\n");
        iNo2 = sObj.nextInt();

        Arithmatic2 aObj = new Arithmatic2(iNo1,iNo2);
        iAns = aObj.Addition();
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = "+iAns );
    }

}
