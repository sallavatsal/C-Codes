#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, rows;

    printf("\nEnter number of rows:");
    scanf("%d", &rows);

    for( x = rows ; x >= 1 ; x-- ){

        for( y = x ; y >= 1 ; y-- ){
            printf("*");
        }

        printf("\n");

    }
}
