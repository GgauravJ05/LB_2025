import java.util.Scanner;

public class program246 {

    public static void EvenOddFactors(int iNo) {
        for (int iCnt = 1; iCnt <= iNo; iCnt++) {
            if (iNo % iCnt == 0) {
                // Use ternary operator to decide what to print
                System.out.println(
                        (iCnt % 2 == 0) ? (iCnt + " is Even Factor") : (iCnt + " is Odd Factor")
                );
            }
        }
    }

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        int iNo;
        System.out.println("Enter the number :: ");
        iNo = sObj.nextInt();

        EvenOddFactors(iNo);
    }
}