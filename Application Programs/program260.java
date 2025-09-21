import java.util.Scanner;

public class program260 {
    public static int countCapital(String str)
    {
        char[] Arr = str.toCharArray();
        int iCapCount =0;
        for(int iCnt =0;iCnt<Arr.length;iCnt++)
        {
            if((Arr[iCnt]>='A') && (Arr[iCnt]<='Z'))
            {
                iCapCount++;
            }
        }
        return iCapCount;
    }
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();

        int iCapCount = countCapital(str);
        System.out.println("Number of capital characters in "+str+"is="+iCapCount);
        sObj.close();
    }
}
