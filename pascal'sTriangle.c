#include <stdio.h>
#include <stdlib.h>

long factorial(int);                                                            // Prototyping

int main()
{
    int i, j, n, rows ;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=0; i<rows; i++)
    {

        for(j = (rows-i); j >= 0; j--)
            printf(" ");

        for(j = 0; j <= i; j++)
        {
            printf("%ld ", (factorial(i)/(factorial(j)*factorial(i-j))) );
        }

        printf("\n");
    }

    return 0;
}

long factorial(int i){

    int j;
    long result = 1;

        for( j = i; j >= 1; j--){
            result = result*j;
        }

    return result;

}
