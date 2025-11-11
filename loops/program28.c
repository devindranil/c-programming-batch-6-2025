//C program to check whether a number is Strong number or not
/**
 * Example
Input
Input number: 145
Output
145 is STRONG NUMBER
 * 
 */

#include <stdio.h>
int main()
{
    //n & r are variables to store number and remainder
    int n,r;
    //sum is variable to store sum of factorial of digits
    int sum=0;
    //user input
    printf("Enter a number: ");
    scanf("%d", &n);//145
    //c is variable to store number
    int c=n;
    //loop to find sum of factorial of digits
    while(n != 0)
    {
        r = n%10;//find remainder
        int fact=1;//fact is variable to store factorial of digit
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum = sum + fact;//find sum of factorial of digits
        n /= 10;//reduce number by 1 digit
    }
    printf("%d\n",sum);
    //check if number is strong or not
    if(c == sum){
        printf("%d is STRONG NUMBER", c);
    }
    else{
        printf("%d is not STRONG NUMBER", c);
    }
    
    return 0;
}