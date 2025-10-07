import java.util.Scanner;

public class program405 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int irow = 0, icol = 0;
        System.out.println("Enter number of rows:");
        irow = scanner.nextInt();

        System.out.println("Enter the number of columns:");
        icol = scanner.nextInt();
        MyMatrixfromotherpackge myobj = new MyMatrixfromotherpackge(irow, icol);
        myobj.accept();
        myobj.display();
        System.out.println("update matrix after converting odd to even");
        myobj.updateMatrix();
        myobj.display();
    }
}
public class Matrix
{
    public int Arr[][];
    public Matrix(int irow, int icol)
    {
        Arr = new int[irow][icol];
    }

    public void accept()
    {
        int i=0,j=0;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the elements in array:");
        for(i=0;i<Arr.length;i++) //outer,row
        {
            for(j=0;j<Arr[i].length;j++)//inner col,
            {
                Arr[i][j] = scanner.nextInt();
            }
        }
    }

    public void display()
    {
        int i=0,j=0;
        System.out.println("Matrix elements are:");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j] +"\t");
            }
            System.out.println();
        }
    }
}

class MyMatrixfromotherpackge extends Matrix {
    public MyMatrixfromotherpackge(int i, int j) {
        super(i, j);
    }

    public void updateMatrix()
    {
        int i=0,j=0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr[i].length; j++) {
                if(Arr[i][j]%2!=0)
                {
                    Arr[i][j]=(Arr[i][j])+1;
                }
            }
        }
    }
}

