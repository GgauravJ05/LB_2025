import java.util.Scanner;

class Matrix {
    public int Arr[][];
    public int irow, icol;

    public Matrix(int irow, int icol) {
        this.irow = irow;
        this.icol = icol;
        Arr = new int[irow][icol];
    }

    public void accept() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the elements in the Matrix :: ");
        for (int i = 0; i < irow; i++) {
            for (int j = 0; j < icol; j++) {
                Arr[i][j] = scanner.nextInt();
            }
        }
    }

    public int summation() {
        int sum = 0;
        for (int i = 0; i < irow; i++) {
            for (int j = 0; j < icol; j++) {
                sum += Arr[i][j];
            }
        }
        return sum;
    }

    public void display() {
        System.out.println("\nMatrix elements are: ");
        for (int i = 0; i < irow; i++) {
            for (int j = 0; j < icol; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }
}

public class program388 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int row = sc.nextInt();

        System.out.print("Enter number of columns: ");
        int col = sc.nextInt();

        Matrix m = new Matrix(row, col);

        m.accept();
        m.display();

        int result = m.summation();
        System.out.println("\nSummation of all elements = " + result);
    }
}