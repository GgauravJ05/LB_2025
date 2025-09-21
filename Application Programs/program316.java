package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class program316 {
    public static void main(String[] args) throws IOException {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter existing source file name");
        String sourceFileName = sobj.nextLine();
        File fobj = new File(sourceFileName);
        if(!fobj.exists())
        {
            System.out.println("Source file is not available");
            return;
        }
        System.out.println("Enter the name of destination file that we want to create");
        String destfileName =  sobj.nextLine();
        File destFileObj  = new File(destfileName);
        destFileObj.createNewFile();

        FileInputStream inputStream = new FileInputStream(sourceFileName);
        FileOutputStream outputStream = new FileOutputStream(destfileName);

        byte Buffer[] = new byte[1024];
        int noofbytes = 0;

        while((noofbytes = inputStream.read(Buffer))!=-1)
        {
            outputStream.write(Buffer,0,noofbytes);
        }
        System.out.println("File copied successfully");
        inputStream.close();
        outputStream.close();
    }
}
