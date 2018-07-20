#include <stdio.h>

void Circle(int r)
{
    int N = 2*r;                            // Square
    int x, y;                               // Co-ordinates

    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= N; j++)
        {
            x = i - r;                      // x co-ordicate
            y = j - r;                      // y co-ordicate

            if( x*x + y*y <= r*r+1 ){
                printf("*");
            }

            else
                printf(" ");
            printf(" ");
        }
        printf("\n");
    }
}

int  main()
{
    Circle(10);                          // Radius of the circle is 10
    return 0;
}
