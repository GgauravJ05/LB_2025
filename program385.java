import java.util.Scanner;

public class program385 {
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

        for(i=0;i<irow;i++)
        {
            for(j=0;j<icol;j++)
            {
                System.out.print(Arr[i][j] +"\t");
            }
            System.out.println();
        }
    }
}
