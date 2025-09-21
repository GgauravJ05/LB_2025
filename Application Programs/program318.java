package FSJava;

import java.io.File;
import java.util.Scanner;

public class program318 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name of directory/folder");
        String directoryName = sobj.nextLine();

        File fobj = new File(directoryName);
        boolean isDirectory = fobj.isDirectory();
        if(isDirectory)
        {
            System.out.println("Directory is present");
            File fileList[] = fobj.listFiles();
            System.out.println("no of files in the directory are :" +fileList.length);
        }
        else {
            System.out.println("There is no such directory");
        }

    }
}
