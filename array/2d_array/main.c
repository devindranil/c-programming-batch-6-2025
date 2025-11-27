#include <stdio.h>
int main()
{
    /*Array Lietral*/
    /*int a[3][3]={
        {10,20,15}, // row 1, index=0
        {30,40}, // row 2, index=1
        {20,-5} // row 3, index=2
    };*/

    // user input
    int a[2][3];
    int sum = 0; // 60
    printf("Enter the elements of the array: \n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nElements of the array is: \n");
    //printf("%d",a[2][1]);
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d\t",a[i][j]);
            // sum of matrix
            sum = sum + a[i][j];
        }
        printf("\n");
    }

    printf("The sum of all the elements of the array is: %d",sum);


    return 0;
}
