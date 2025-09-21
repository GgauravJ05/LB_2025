import java.util.Scanner;

//Input 5
//Output: 1 * 2 * 3 * 4* 5 *
public class program248 {
    public static void display(int iNo)
    {
        int iCnt = 0;
        for(iCnt =1;iCnt<=iNo;iCnt++)
        {
            System.out.print(iCnt +"\t"+"*\t");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int iNo =0;
        Scanner sObj =new Scanner(System.in);
        System.out.println("Enter the number");;
        iNo = sObj.nextInt();
        display(iNo);
        sObj.close();
    }
}
