package FSJava;

import java.io.File;
import java.io.FileInputStream;
import java.util.Scanner;

public class program329 {
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
    }
}
