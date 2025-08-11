import java.util.Scanner;

public class program263 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iDigit = 0;
        int iCnt = 0;
        System.out.println("Enter the number :: ");
        iNo = sobj.nextInt();

        while(iNo != 0)
        {
            iDigit = iNo%2;
            iNo = iNo/2;
            System.out.print(iDigit);
            if(iDigit == 1)
            {
                iCnt++;
            }
        }
        System.out.println("\nNumber of 1 bit are = " +iCnt);
    }
}