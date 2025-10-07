import java.util.Scanner;

public class program400 {
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
        myobj.Additionofrow();
        myobj.MaxfromRow();
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

    class MyMatrixfromotherpackge extends Matrix
    {
        public MyMatrixfromotherpackge(int i, int j)
        {
            super(i,j);
        }

        public void Additionofrow()
        {
            int i=0,j=0;
            int isum=0;
            for(i=0;i<Arr.length;i++)
            {
                for(j=0;j<Arr[i].length;j++)
                {
                    isum = isum + Arr[i][j];
                }
                System.out.println("sum of row:"+(i+1)+"is="+isum);
                isum=0;
            }
        }

        public void MaxfromRow()
        {
            int i=0,j=0;
            int iMax =0;
            for(i=0;i<Arr.length;i++)
            {
                iMax = Arr[i][0];
                for(j=0;j<Arr[i].length;j++)
                {
                    if(Arr[i][j]>iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
                System.out.println("Maximum of row: "+(i+1)+" is="+iMax);
            }
        }
    }
