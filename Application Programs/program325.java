package FSJava;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.util.Scanner;

public class program325 {
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

            String Header = null;
            //To write the data into zipped file
            FileOutputStream fileOutputStream = new FileOutputStream(zippedFilename);

            //Travel directory
            for(int i=0; i< fileArray.length;i++) {
                //create Header
                Header = fileArray[i].getName()+" "+fileArray[i].length();
                //Add extra spaces at the end of the header to make its size as 100
                for(int j =Header.length();j<100;j++)
                {
                    Header =Header+"_";
                }
              //convert the string header into byte array
                byte hArr[]=Header.getBytes();
                //write the header into zipped file
                fileOutputStream.write(hArr,0,100);
                System.out.println("Header inserted for file name:"+fileArray[i].getName());
            }
        }
        else {
            System.out.println("There is no such a directory");
        }
    }

}
