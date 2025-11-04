#include<stdio.h>
int main()
{
    int n,r=0,c; //n=121 n=0
    printf("Enter a number to reverse\n");
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    // palindrome condition
    printf("The reverse number is: %d\n",r);
    if(c==r){
        printf("The number is palindrome number");
    }else{
        printf("The number is not a palindrome number");
    }
    
    return 0;
}

/*
input = 123
output = 321
*/