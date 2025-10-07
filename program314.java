package FSJava;

import java.io.FileInputStream;
import java.util.Scanner;

public class program314 {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();

        try {
            FileInputStream fileInputStream = new FileInputStream(fileName);
            int b = fileInputStream.read();
            System.out.println((char)b);
            fileInputStream.close();

        } catch(Exception e)
        {
            System.out.println("Exception occurred");
        }

    }

}
