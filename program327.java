package FSJava;

import javax.imageio.stream.FileImageInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class program327 {
    public static void main(String[] args) throws IOException {
        System.out.println("--------------------------------------------------");
        System.out.println("----------Fabulous File Zipper/Unzipper-----------");
        System.out.println("--------------------------------------------------");
        Scanner sobj = new Scanner(System.in);
        boolean isFileCreated = false;

        System.out.println("Enter the name of directory");//LBDir
        String dirName = sobj.nextLine();

        System.out.println("Enter the name of zipped/packed file that you want to create");//combine.txt
        String zippedFilename = sobj.nextLine();

        File fobjZip = new File(zippedFilename);
        if(fobjZip.exists())
        {
            fobjZip.delete();
            System.out.println(zippedFilename + " deleted as it was already availble");
        }
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
            byte Buffer[] = new byte[1024];
            int noofbytes =0;
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

                //To read the data from directory's files
                FileImageInputStream inputStream = new FileImageInputStream(fileArray[i]);
                //write data into zipped file after header
                while((noofbytes=inputStream.read(Buffer))!=-1){
                    fileOutputStream.write(Buffer,0,noofbytes);
                }
                System.out.println("Data inserted for file name:"+fileArray[i].getName());
                inputStream.close();
            }
            fileOutputStream.close();
            System.out.println("--------------------------------------------------");
            System.out.println("Thank You For using Fabulous File Zipper/Unzipper");
            System.out.println("--------------------------------------------------");
        }
        else {
            System.out.println("There is no such a directory");
        }
    }

}
