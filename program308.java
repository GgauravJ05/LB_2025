package FSJava;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class program308 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();
        File fobj = new File(fileName);

        boolean isFileCreated = false;
        try {
            isFileCreated = fobj.createNewFile();
            if(isFileCreated)   //isFileCreated==true
            {
                System.out.println("File gets successfully created");
            }
            else {
                System.out.println("Unable to create a file/ file already exists");
            }
        } catch (IOException e) {
            System.out.println("Exception ocurred");
        }
        catch(Exception exception)
        {
            System.out.println("Exception ocurred");
        }

    }

}
