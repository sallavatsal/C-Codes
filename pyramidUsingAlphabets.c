#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;

    char alphabet;

    printf("\nEnter a capital alphabet:");
    scanf("%c", &alphabet);

    z = alphabet;                           //Storing Ascii

    for( x = 'A' ; x <= alphabet ; x++ ){
        for( y = x; y >= 'A' ; y-- ){
            printf(" %c ", x);
        }

        printf("\n");

    }P
}
