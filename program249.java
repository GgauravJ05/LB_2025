import java.util.Scanner;

public class program249 {
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

    }
}