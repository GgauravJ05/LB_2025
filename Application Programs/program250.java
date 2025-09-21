import java.util.Scanner;

public class program250 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        int iSize = 0, iCnt=0;
        System.out.println("Enter the number of elements");
        iSize = sObj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter elements in the array");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            Arr[iCnt] = sObj.nextInt();
        }

        System.out.println("Elements in the array are");
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sObj.close();
    }

}
