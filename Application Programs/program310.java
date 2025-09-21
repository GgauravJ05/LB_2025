package FSJava;

import java.io.File;
import java.util.Scanner;

public class program310 {
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
                System.out.println("Name of the file :"+fobj.getName());
                System.out.println("Absolute path of file is:" + fobj.getAbsolutePath());
                System.out.println("File size is :" + fobj.length());
                System.out.println("can we read fil?:" +fobj.canRead());
                System.out.println("can we write into file:"+fobj.canWrite());
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
