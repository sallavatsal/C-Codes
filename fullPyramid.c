#include <stdio.h>
#include <stdlib.h>

int  main()
{
    int x, y, space, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    space = rows-1;

    for(x = 1 ; x <= rows ; x++){

        for(y = space ; y >= 0 ; y--){
            if(y != 0)
            {
                printf("   ");
            }
        }

        for(y = 1 ; y <= 2*x-1 ; y++){
                printf(" * ");
        }

    printf("\n");
    space = space-1;

    }
}
