import java.util.Scanner;

public class program241 {

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in); // Non Buffered Approach to accept input from user
        Arithmatic aObj = new Arithmatic();
        int iNo1,iNo2 =0;
        int iAns = 0;

        System.out.println("Enter First Number\n");
        iNo1 = sObj.nextInt();
        System.out.println("Enter Second Number\n");
        iNo2 = sObj.nextInt();
        iAns = aObj.Addition(iNo1,iNo2);
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = "+iAns );
    }
}

class Arithmatic
{
    public int Addition(int iNo1, int iNo2)
    {
        return (iNo1+iNo2);
    }
}
