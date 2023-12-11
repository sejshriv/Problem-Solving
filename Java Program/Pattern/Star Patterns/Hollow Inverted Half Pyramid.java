import java.util.Scanner;

public class Pattern2 {
    public static void main(String[] args) {
        /*
         **********
         *       *
         *      *
         *     *
         *    *
         *   *
         *  *
         * *
         **
         *

         */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=n;i>0;i--)
        {
            for (int j=i;j>0;j--)
            {
                if(j==1 || i==n || i==j  )
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }

    }
}
