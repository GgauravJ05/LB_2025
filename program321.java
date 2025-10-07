package FSJava;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class program321 {
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

            for(int i=0; i< fileArray.length;i++) {
                System.out.println("File name :" + fileArray[i].getName() + " File size:"+fileArray[i].length());
            }
        }
    }
}
