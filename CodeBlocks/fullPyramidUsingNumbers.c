#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int x, y, space, rows, l;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    space = rows;

    for( x = 1 ; x <= rows ; x++ ){

            for(y = space ; y >= 0 ; y--){

                if(y!=0)
                {
                    printf("  ");
                }

            }

        l = x;

                do
                {
                    printf("%d ", l);
                    l++;
                }while(l<=(2*x-1));

                l-=2;

                while(l>=x)
                {
                    printf("%d ", l);
                    l--;
                }

//            }

        printf("\n");
        space = space-1;

    }

}
F
