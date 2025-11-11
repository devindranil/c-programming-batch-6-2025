#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);

    // store num1 and num2 on new variable
    n1=num1;
    n2=num2;

    // logic to calculate gcd
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }

    gcd = n1; // final gcd value of two numbers num1 and num2

    // logic to calculate lcm
    lcm = (num1*num2)/gcd;

    printf("The gcd of %d and %d is %d\n",num1,num2,gcd);
    printf("The lcm of %d and %d is %d\n",num1,num2,lcm);
    
    return 0;
}


