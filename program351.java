package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Scanner;

public class program351 {
    public static void main(String[] args) throws Exception {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name of zipped file that you want to extract/unpack ");
        String packedFileName = sobj.nextLine();

        File fpackobj = new File(packedFileName);
        FileInputStream inputStream = new FileInputStream(fpackobj);

        byte[] Header = new byte[100];
        inputStream.read(Header, 0, 100);
        String HeaderStr = new String(Header);
        System.out.println(HeaderStr);
        System.out.println("Length of Header string is : "+ HeaderStr.length());

        String Hstr= HeaderStr.replaceAll("_","").trim();
        System.out.println("Length of Hstr = "+ Hstr.length());

        String strArr[] = Hstr.split(" ");
        String newFileName = strArr[0];
        File newFile = new File(newFileName);
        newFile.createNewFile();

        int newFileSize = Integer.parseInt(strArr[1]);
        byte[] Buffer = new byte[newFileSize];

        inputStream.read(Buffer,0,newFileSize);

        FileOutputStream fileOutputStream = new FileOutputStream(newFileName);
        fileOutputStream.write(Buffer,0,newFileSize);
    }
}
