package FSJava;

import java.io.FileInputStream;
import java.util.Scanner;

public class program315 {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();

        try {
            FileInputStream fileInputStream = new FileInputStream(fileName);
            byte Arr[] = new byte[100];
            fileInputStream.read(Arr);

            String str = new String(Arr);
            System.out.println(str);
            fileInputStream.close();

        } catch(Exception e)
        {
            System.out.println("Exception occurred");
        }

    }
}
