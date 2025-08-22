// File: program243.java
import java.util.*;
import fabulous.Arithmatic2;

public class program243 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);

        int iNo1, iNo2;
        int iAns;

        System.out.println("Enter the first number :: ");
        iNo1 = sObj.nextInt();

        System.out.println("Enter the second number :: ");
        iNo2 = sObj.nextInt();

        Arithmatic2 aObj = new Arithmatic2(iNo1, iNo2);

        iAns = aObj.Addition();
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = " + iAns);
    }
}