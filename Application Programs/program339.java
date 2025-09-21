package FSJava;

import java.util.Scanner;

public class program339 {
    public static void main(String[] args) {
        Scanner scobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = scobj.nextLine();
        str = str.trim();
        System.out.println("After trim "+ str);
        str = str.replaceAll(" ","");
        System.out.println("After replace all "+str);
    }
}
