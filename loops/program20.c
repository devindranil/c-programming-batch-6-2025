//C program to find all factors of a number
/**
 * Example
Input
Input number: 12
Output
Factors of 12: 1, 2, 3, 4, 6, 12
 * 
 */
#include <stdio.h>
int main()
{
    int n,i;//n is variable to store number
    printf("Enter a number: ");
    scanf("%d", &n);
    //loop to find factors of number
    for(i=1;i<=n;i++)
    {
        //check if i is factor of n
        if(n%i==0)
        {
            printf("The factors are: %d \n", i);
        }
    }
    return 0;
}