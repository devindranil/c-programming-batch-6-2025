//C program to find factorial of a number
/**
 *Example
Input
Input number: 5
Output
Factorial: 120
 * 
 */
#include <stdio.h>
int main()
{
    int n,count,fact=1;//n is variable to store number 6
    printf("Enter a number: ");
    scanf("%d", &n);
    //loop to find factorial of number
    for(count=1;count<=n;count++)
    {
        fact = fact*count;//1*1=1 1*2=2 2*3=6
    }
    printf("Factorial: %d", fact);
    return 0;
}