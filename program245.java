import java.io.*;
import java.util.Scanner;

public class program245 {

    public static int Factorial(int iNo) {
        int iFact = 1;
        int iCnt = 1;

        while (iCnt <= iNo) {
            iFact = iFact * iCnt;
            iCnt++;
        }

        return iFact;
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