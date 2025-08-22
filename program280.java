import java.util.Scanner;

public class program280 {
    public static int toggleBit(int iNo,int iPos)
    {
        int iMask =0x00000001;
        int res =0;
        iMask = iMask<<(iPos-1);
        res = iMask ^ iNo;
        return res;

    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        System.out.println("Enter bit position");//0-31
        int iPos = sobj.nextInt();

        int iRet = toggleBit(iNo,iPos);
        System.out.println("Updated number is :" + iRet);
//        boolean iRet = toggleBit(iNo);
//        if(iRet==true){}
    }
}
