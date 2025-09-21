package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class program323 {
    public static void main(String[] args) throws IOException {
        Scanner sobj = new Scanner(System.in);
        boolean isFileCreated = false;

        System.out.println("Enter the name of directory");
        String dirName = sobj.nextLine();

        System.out.println("Enter the name of zipped/packed file that you want to create");
        String zippedFilename = sobj.nextLine();

        File fobjZip = new File(zippedFilename);
        isFileCreated = fobjZip.createNewFile();
        if(!isFileCreated)
        {
            System.out.println("Unable to create zipped file...");
            return;
        }

        File fobjdir = new File(dirName);
        if(fobjdir.isDirectory()==true)
        {
            System.out.println("Directory is present...");
            File fileArray[] = fobjdir.listFiles();
            System.out.println("number of files in the directory are :"+ fileArray.length);

            FileOutputStream outputStream = new FileOutputStream(zippedFilename);
            byte Buffer[] = new byte[1024];
            int noofbytes =0;
            for(int i=0; i< fileArray.length;i++) {
                FileInputStream fileInputStream = new FileInputStream(fileArray[i]);
                while((noofbytes=fileInputStream.read(Buffer))!=-1){
                    outputStream.write(Buffer,0,noofbytes);
                }
                fileInputStream.close();
            }
            outputStream.close();
        }
        else {
            System.out.println("There is no such a directory");
        }
    }

}
