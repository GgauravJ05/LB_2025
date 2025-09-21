package FSJava;

import java.io.FileOutputStream;
import java.io.FileWriter;
import java.util.Scanner;

public class program312 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();

        try {
            System.out.println("Enter the data that you want to write into the file:");
            String data = sobj.nextLine();

            FileOutputStream fobj = new FileOutputStream(fileName);
            byte arr[] = data.getBytes();
            fobj.write(arr);
            fobj.close();

        }
        catch(Exception exception)
        {
            System.out.println("Exception ocurred");
        }

    }
}
