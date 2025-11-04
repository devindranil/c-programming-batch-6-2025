//fibanoci series
/*
fibanoci series (loop and recursion)
term 8
0 1 1 2 3 5 8 13
*/
#include<stdio.h>
int main(){

    int n;//n is variable to store number
    int a=0;//a is variable to store first number
    int b=1;//b is variable to store second number
    int c;//c is variable to store sum of a and b
    int i;//i is variable to use in loop

    printf("Enter number of term....");
    scanf("%d",&n);
    //loop to print fibonacci series
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;//calculate sum of a and b
        a=b;//assign b to a
        b=c;//assign c to b
    }
    return 0;
}