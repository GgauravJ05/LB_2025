import java.util.Scanner;

class MatrixwithSum {
    // Function to display matrix
    public void display(int Arr[][]) {
        System.out.println("\nMatrix is: ");
        for(int i = 0; i < Arr.length; i++) {           // rows
            for(int j = 0; j < Arr[i].length; j++) {    // columns
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    // Function to calculate summation of all elements
    public int summation(int Arr[][]) {
        int sum = 0;
        for(int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                sum += Arr[i][j];
            }
        }
        return sum;
    }
}

public class program387 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number of rows :: ");
        int irow = scanner.nextInt();

        System.out.println("Enter the number of columns :: ");
        int icol = scanner.nextInt();

        int Arr[][] = new int[irow][icol];

        System.out.println("Enter the elements in the Array :: ");
        for (int i = 0; i < irow; i++) {
            for (int j = 0; j < icol; j++) {
                Arr[i][j] = scanner.nextInt();
            }
        }

        MatrixwithSum mobj = new MatrixwithSum();
        mobj.display(Arr);

        int total = mobj.summation(Arr);
        System.out.println("\nSummation of all elements = " + total);
    }
}