import java.util.Scanner;

//Accept no from user and display its even and odd factors;
public class program246 {

    public static void EnenOddFactors(int iNo)
    {
        int iCnt =0;
        for(iCnt =1;iCnt<=iNo;iCnt++)
        {
            if((iNo%iCnt) ==0)
            {
               /* if ((iCnt % 2) == 0) {
                    System.out.println("EvenFactor" + iCnt);
                } else {
                    System.out.println("OddFactor" + iCnt);
                }*/

                // OR below with ternary operator i.e ( condition ? if true : if false)
                System.out.println (
                                (iCnt % 2 == 0) ?
                                 (iCnt + " is Even Factor") :
                                 (iCnt + " is Odd Factor")
                );
            }
        }
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
