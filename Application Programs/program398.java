import javalb.Matrix;

import java.util.Scanner;

public class program398 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int irow=0, icol =0;
        System.out.println("Enter number of rows:");
        irow=scanner.nextInt();

        System.out.println("Enter the number of columns:");
        icol = scanner.nextInt();
        MyMatrixfromotherpackge myobj = new MyMatrixfromotherpackge(irow,icol);
        myobj.accept();
        myobj.display();
    }
}

class MyMatrixfromotherpackge extends Matrix
{
    public MyMatrixfromotherpackge(int i, int j)
    {
        super(i,j);
    }

    //logic
}