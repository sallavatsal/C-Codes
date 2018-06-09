#include <stdio.h>          // C++: #include <iostream>
#include <stdlib.h>         // C++: #include <cstlib>
#include <time.h>           // C++: #include <ctime>

int main()
{
    int howMany;
    int i, temp = 0;
    int swapped;

    printf("\nEnter the number of terms you want: ");
    scanf("%d", &howMany);

    int A[howMany];

    printf("\n");
    printf("\nOriginal List:\n");

    srand(time(0));

    for(i = 0; i<howMany; i++)
    {
        A[i] = ( rand() % 25 ) + 1;         // Number 25 can be changed to achive desired value
        printf("%d ", A[i]);
    }

    printf("\n");
    while(1){

        swapped = 0;
        for(i = 0; i < howMany-1; i++){

            if(A[i+1] > A[i]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;

                swapped = 1;
            }
        }

        if(swapped == 0){
            break;
        }

}

    printf("\nSorted List:\n");

    for( i = 0; i<howMany; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n\nThe smallest possible integer higher than highest integer in the random Array: ");
    printf("%d\n\n", A[0]+1);

    return 0;
}
