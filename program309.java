package FSJava;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class program309 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();

        try {
            File fobj = new File(fileName);
            boolean isExists = false;
            isExists = fobj.exists();
            if(isExists)   //isExists==true
            {
                System.out.println("File is present");
            }
            else {
                System.out.println("There is no such file");
            }
        }
        catch(Exception exception)
        {
            System.out.println("Exception ocurred");
        }

    }

}
