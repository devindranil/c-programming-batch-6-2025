#include <stdio.h>
int main()
{
    /*Half pyramid*/
    /*int i,j;
    for(i=1;i<=5;i++)
    {
        // inverted half pyramid
        for(j=5;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }*/

    /*Full pyramid*/
    int i, j, k;
    for (i = 1; i <= 5; i++) // rows
    {
        for (j = 5; j > i; j--) // left space
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++) // middle&right side space coloumns
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


