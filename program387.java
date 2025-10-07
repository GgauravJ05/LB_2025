import java.util.Scanner;

public class program387 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int irow=0, icol =0;
        System.out.println("Enter number of rows:");
        irow=scanner.nextInt();

        System.out.println("Enter the number of columns:");
        icol = scanner.nextInt();

        int Arr[][] = new int[irow][icol];
        int i=0,j=0;
        System.out.println("Enter the elements in array:");
        for(i=0;i<irow;i++) //outer,row
        {
            for(j=0;j<icol;j++)//inner col,
            {
                Arr[i][j] = scanner.nextInt();
            }
        }

        Matrix obj1 = new Matrix();
        obj1.display(Arr);
        int iret =0;
        iret = obj1.summation(Arr);
        System.out.println("Addition of all elements is :" +iret);
    }
}

class Matrix
{
    public void display(int Arr[][])
    {
        int i=0,j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j] +"\t");
            }
            System.out.println();
        }
    }
    public int summation(int Arr[][])
    {
        int i=0,j=0;
        int isum =0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                isum = isum + Arr[i][j];
            }
        }
        return isum;
    }
}
