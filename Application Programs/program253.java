import java.util.Scanner;

public class program253 {
    public static int Addition(int []Brr)
    {
        int iCnt =0;
        int iSum = 0;
        for(iCnt=0;iCnt<Brr.length;iCnt++)
        {
            iSum = iSum + Brr[iCnt];
        }
        return iSum;
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
        int iAns = Addition(Arr);
        System.out.println("Addition of array elements is = "+iAns);
        sObj.close();
    }

}
