package FSJava;

import java.io.File;
import java.util.Scanner;

public class program320 {
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
            System.out.println("name "+"size");
            for(int i =0;i<fileList.length;i++)
            {
                System.out.println(fileList[i].getName()+"\t"+fileList[i].length());
            }
        }
        else {
            System.out.println("There is no such directory");
        }

    }

}
