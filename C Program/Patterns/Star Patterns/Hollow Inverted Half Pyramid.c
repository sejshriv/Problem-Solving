#include<stdio.h>

int main() {
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
        int n;
        printf("Enter number : ");
        scanf("%d",&n);
        for(int i=n;i>0;i--)
        {
            for (int j=i;j>0;j--)
            {
                if(j==1 || i==n || i==j  )
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        return 0;

    }
