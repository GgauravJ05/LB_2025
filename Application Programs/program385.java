import java.util.Scanner;

public class program385 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int irow = 0, icol = 0;

        System.out.println("Enter the number of rows :: ");
        irow = scanner.nextInt();

        System.out.println("Enter the number of columns :: ");
        icol = scanner.nextInt();

        int Arr[][] = new int[irow][icol];

        System.out.println("Enter the elements in the Array :: ");
        for(int i=0; i<irow; i++) { // outer row
            for(int j=0; j<icol; j++) { // inner col
                Arr[i][j] = scanner.nextInt();
            }
        }

        System.out.println("\nMatrix is: ");
        for(int i=0; i<irow; i++) { // outer row
            for(int j=0; j<icol; j++) { // inner col
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}