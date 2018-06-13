#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, rows, p=1;

    printf("\nEnter number of rows:");
    scanf("%d", &rows);

    for( x = rows ; x >= 1 ; x-- ){

        p = 1;

        for( y = x ; y >= 1 ; y-- ){
            printf("%d",p);
            p++;
        }

        printf("\n");

    }
}
