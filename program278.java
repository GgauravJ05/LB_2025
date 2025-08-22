import java.util.Scanner;

public class program278 {
    public static int toggleBit(int iNo)
    {
        int iMask =0x00000400;
        int res = iMask ^ iNo;
       return res;
      
    }
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        int iRet = toggleBit(iNo);
        System.out.println("Updated number is :" + iRet);
//        boolean iRet = toggleBit(iNo);
//        if(iRet==true){}
    }
}
