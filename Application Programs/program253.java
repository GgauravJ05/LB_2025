import java.util.Scanner;

public class program253 {

    public static int Addition(int Brr[]) {
        int iCnt = 0;
        int iSum = 0;
        System.out.println("Array elements are :: ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++) {
            System.out.print(Brr[iCnt] + "\t");
            iSum = iSum + Brr[iCnt]; // corrected line
        }
        System.out.println(); // for newline
        return iSum;
    }

    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        int iSize = 0, iCnt = 0;

        System.out.println("Enter the number of elements :: ");
        iSize = sObj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements in the Array :: ");
        for(iCnt = 0; iCnt < iSize; iCnt++) {
            Arr[iCnt] = sObj.nextInt();
        }
        int iAns = Addition(Arr);
        System.out.println("Addition of Arrat elements = " + iAns);


        sObj.close();

    }
}