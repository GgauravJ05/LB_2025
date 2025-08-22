import java.util.*;

class Arithmatic
{
    public int Addition(int iNo1, int iNo2)
    {
        return  (iNo1+iNo2);
    }
}

public class program241 {
    public static void main(String[] args) {

        Scanner sObj = new Scanner(System.in); // non bufferend approach to accept input from the user
        Arithmatic aObj = new Arithmatic();

        int iNo1, iNo2;
        int iAns = 0;

        System.out.println("Enter the first number :: ");
        iNo1 = sObj.nextInt();

        System.out.println("Enter the second number :: ");
        iNo2 = sObj.nextInt();

        iAns = aObj.Addition(iNo1, iNo2);
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = " + iAns);
    }
}