package FSJava;

import java.util.Scanner;

public class program343 {
    public static void main(String[] args) {
        Scanner scobj = new Scanner(System.in);
        System.out.println("Enter string");
        String str = scobj.nextLine();
        str = str.trim();
        System.out.println("After trim " + str);
        str = str.replaceAll("\\s+", " ");//escape sequence character like \n \t
        System.out.println("After replace all " + str);

        String[] words = str.split(" ");
        System.out.println("no of words in a sentence ar :" + words.length);

        for (int i = 0; i < words.length; i++)
        {
            System.out.println(words[i]);
        }

    }
}
