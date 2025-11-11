//C program to check whether a number is perfect number or not
/**Example
Input
Input any number: 6
Output
6 is PERFECT NUMBER
*/

#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);//6
    for(i=1;i<n;i++) 
    {

        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    //check if number is perfect or not
    if(sum==n){
        printf("%d is PERFECT NUMBER", n);
    }
    else{
        printf("%d is not PERFECT NUMBER", n);
    }
    return 0;
}