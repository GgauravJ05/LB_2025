import java.util.Scanner;

public class program258 {
    public static void main(String[] args) {
        Scanner sObj = new Scanner(System.in);
        String str = null;
        System.out.println("Enter your name");
        str = sObj.nextLine();

        char[] Arr = str.toCharArray();
        for(int iCnt =0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        sObj.close();
    }
}
