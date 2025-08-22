import java.util.Scanner;

public class program266 {
    public static boolean checkBit(int iNo)
    {
        int iMask =256;
        int Result =0;
        Result = iNo & iMask;
        if(Result ==iMask)
        {
            return true;
        } else {
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        if(checkBit(iNo))
        {
            System.out.println("9th bit is ON");
        } else {
            System.out.println("9th bit is OFF");
        }

//        boolean iRet = checkBit(iNo);
//        if(iRet==true){}
    }
}
