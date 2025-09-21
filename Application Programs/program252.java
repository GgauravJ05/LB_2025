import java.util.Scanner;

public class program252 {
    static void display(int brr[])
    {
        int iCnt =0;
        System.out.println("Elements in the array are");
        for(iCnt=0;iCnt<brr.length;iCnt++)
        {
            System.out.print(brr[iCnt] + "\t");
        }
    }
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
        display(Arr);
        sObj.close();
    }
}
