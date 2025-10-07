package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

public class program350 {
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
        System.out.println("File name :"+strArr[0]);
        System.out.println("File size :"+strArr[1]);

        File newFile = new File(strArr[0]);
        newFile.createNewFile();
//        byte[] Buffer = new byte[strArr[1]];//Integer.parseInt() or Integer.valueOf()
        byte[] Buffer = new byte[Integer.parseInt(strArr[1])];

    }
}
