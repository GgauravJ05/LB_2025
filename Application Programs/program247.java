import java.util.Scanner;

public class program247 {
    public static void EnenOddFactors(int iNo)
    {
        int iCnt =0;
        int iSumEven = 0;
        int iSumOdd = 0;
        for(iCnt =1;iCnt<=iNo;iCnt++)
        {
            if((iNo%iCnt) ==0)
            {
                if ((iCnt % 2) == 0) {
                   iSumEven = iSumEven + iCnt;
                } else {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
        }
        System.out.println("Sum of EvenFactors is = "+iSumEven);
        System.out.println("Sum of Oddfactors is = "+iSumOdd);
    }

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter the number");
        iNo = sObj.nextInt();

        EnenOddFactors(iNo);
        sObj.close();
    }
}
