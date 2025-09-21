package FSJava;

import java.util.Scanner;

public class program338 {
    public static void main(String[] args) {
     Scanner scobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = scobj.nextLine();
        str = str.trim();
        System.out.println("After trim "+ str);
    }
}

