package FSJava;

import java.util.Scanner;

public class program345 {
    public static void main(String[] args) {
        Scanner scobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = scobj.nextLine();
        str = str.trim();
        System.out.println("After trim " + str);
        str = str.replaceAll("\\s+", " ");//escape sequence character like \n \t
        String[] words = str.split(" ");

        for (String word : words) //foreach
        {
            System.out.println(word);
        }
    }
}
