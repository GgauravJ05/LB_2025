import java.util.Scanner;

public class program277 {
    public static int offBit(int iNo)
    {
        int iMask =0x00000400;
        int Result =0;
        Result = iNo & iMask;
        if(Result ==iMask)
        {
            return (iMask ^ iNo);
        } else {
            return iNo;
        }
    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        int iRet = offBit(iNo);
        System.out.println("Updated number is :" + iRet);
//        boolean iRet = offBit(iNo);
//        if(iRet==true){}
    }
}
