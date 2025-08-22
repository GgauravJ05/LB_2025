import java.util.Scanner;

public class program282 {
    public static boolean checkBit(int iNo,int iPos)
    {
        int iMask =0x00000001;
        iMask = iMask<<(iPos-1);
        int res = iNo & iMask;
        if(res ==iMask)
        {
            return true;
        }
        else {
         return false;
        }

    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        System.out.println("Enter bit position");//0-31
        int iPos = sobj.nextInt();

        boolean iRet = checkBit(iNo,iPos);
        if(iRet==true)
        {
            System.out.println("bit is ON at the given positin");
        }
        else {
            System.out.println("bit is OFF at the given positin");
        }
//        boolean iRet = checkBit(iNo);
//        if(iRet==true){}
    }
}
