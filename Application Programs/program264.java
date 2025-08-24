import java.util.Scanner;

public class program264 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo=0;
        int iMask =4;
        int Result =0;

        System.out.println("Enter Number:");
        iNo = sobj.nextInt();

        Result = iNo & iMask;

        if(Result == iMask)
        {
            System.out.println("3rd bit is ON");
        } else {
            System.out.println("3rd bit is OFF");
        }
    }
}
