import java.util.Scanner;

public class program242 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in); // Non Buffered Approach to accept input from user

        int iNo1,iNo2 =0;
        int iAns = 0;

        System.out.println("Enter First Number\n");
        iNo1 = sObj.nextInt();
        System.out.println("Enter Second Number\n");
        iNo2 = sObj.nextInt();

        Arithmatic1 aObj = new Arithmatic1(iNo1,iNo2);
        iAns = aObj.Addition();
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = "+iAns );
    }
}

class Arithmatic1
{
    public int iVal1;
    public int iVal2;
    Arithmatic1(int A, int B)
    {
        this.iVal1 = A;
        this.iVal2 = B;
    }
    public int Addition()
    {
        return (this.iVal1 + this.iVal2);
    }
}
