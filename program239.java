import java.io.*;

        public class program239 {
            public static void main(String[] args) throws Exception {
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
                int iNo1 = 0, iNo2 = 0;
                int iAns = 0;
                try {
                    System.out.println("Enter the first number :: ");
                    iNo1 = Integer.parseInt(bufferedReader.readLine());

                    System.out.println("Enter the second number :: ");
                    iNo2 = Integer.parseInt(bufferedReader.readLine());

                    iAns = iNo1 + iNo2;
                    System.out.println("Addition of " + iNo1 + " and " + iNo2 + " is = " + iAns);
                } catch (IOException ioException)
                {
                    System.out.println("Exception Occured");
                }
            }
}