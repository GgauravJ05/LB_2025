import java.util.*;

public class program242 {
    public static void main(String[] args) {

        Scanner sObj = new Scanner(System.in); // non-buffered approach to accept input from the user

        int iNo1, iNo2;
        int iAns = 0;

        System.out.println("Enter the first number :: ");
        iNo1 = sObj.nextInt();

        System.out.println("Enter the second number :: ");
        iNo2 = sObj.nextInt();

        Arithmatic1 aObj = new Arithmatic1(iNo1, iNo2); // pass values to constructor

        iAns = aObj.Addition();
        System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = " + iAns);
    }
}

class Arithmatic1 {
    public int iVal1;
    public int iVal2;

    Arithmatic1(int A, int B) {
        this.iVal1 = A;
        this.iVal2 = B;
    }

    public int Addition() {
        return (this.iVal1 + this.iVal2);
    }
}