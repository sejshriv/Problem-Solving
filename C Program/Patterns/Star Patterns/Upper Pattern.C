#include<stdio.h>

    int main() {
        /*
             *
            ***
           *****
          *******
         *********
         */
        
        int n;
        scanf("%d",&n);
        for(int j=1;j<=n;j++) {
            for (int i = -(n-1); i <= n-1; i++) {

                if ((j-1)>=i && -(j-1)<=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}
