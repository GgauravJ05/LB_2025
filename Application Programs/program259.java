import java.util.Scanner;

public class program259 {
    public static void display(String str)
    {
        char[] Arr = str.toCharArray();
        for(int iCnt =0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();

        display(str);
        sObj.close();
    }
}
