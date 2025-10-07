package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

public class program331 {
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

    }
}
