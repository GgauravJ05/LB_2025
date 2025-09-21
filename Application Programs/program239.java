import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class program239 {

    public static void main(String[] args) {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int iNo1, iNo2 =0;
        int iAns =0;
        try {
            System.out.println("Enter First Number \n");
            iNo1 = Integer.parseInt(bufferedReader.readLine());
            System.out.println("Enter second Number \n");
            iNo2 = Integer.parseInt(bufferedReader.readLine());
            iAns = iNo1+iNo2;
            System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = "+iAns );
        } catch (IOException ioException)
        {
            System.out.println("Exception Occurred\n");
        }

    }

}
