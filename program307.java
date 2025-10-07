package FSJava;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class program307 {
    public static void main(String[] args) throws IOException {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the file name");
        String fileName = sobj.nextLine();
        File fobj = new File(fileName);

        boolean isFileCreated = false;
        isFileCreated = fobj.createNewFile();

        if(isFileCreated)   //isFileCreated==true
        {
            System.out.println("File gets successfully created");
        }
        else {
            System.out.println("Unable to create a file/ file already exists");
        }
    }
}
