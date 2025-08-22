import java.util.Scanner;

public class program281 {
    public static int offBit(int iNo,int iPos)
    {
        int iMask =0x00000001;
        iMask = iMask<<(iPos-1);
        int res = iNo & iMask;
        if(res ==iMask)
        {
            return (iNo^iMask);
        }
        else {
            return iNo;
        }

    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        System.out.println("Enter bit position");//0-31
        int iPos = sobj.nextInt();

        int iRet = offBit(iNo,iPos);
        System.out.println("Updated number is :" + iRet);
//        boolean iRet = offBit(iNo);
//        if(iRet==true){}
    }
}
