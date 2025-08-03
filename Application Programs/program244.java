import java.io.*;
import java.util.Scanner;

public class program244 {

    public static int Factorial(int iNo) {
        int iFact = 1;
        int iCnt = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            iFact = iFact * iCnt;
        }

        return iFact; // ✅ Added return statement
    }

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        int iVal = 0;
        int iAns = 0;

        System.out.println("Enter the number :: ");
        iVal = sObj.nextInt();

        iAns = Factorial(iVal);

        // ✅ Fixed typo in output
        System.out.println("Factorial of " + iVal + " is = " + iAns);
        sObj.close();
    }
}