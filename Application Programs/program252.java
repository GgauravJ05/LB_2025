import java.util.Scanner;

public class program252 {

    static void display(int brr[]) {
        int iCnt = 0;
        System.out.println("Array elements are :: ");
        for(iCnt = 0; iCnt < brr.length; iCnt++) {
            System.out.print(brr[iCnt] + "\t");
        }
        System.out.println(); // for newline
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

        sObj.close();

        display(Arr);
    }
}