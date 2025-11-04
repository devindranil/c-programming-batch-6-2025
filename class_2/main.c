
#include<stdio.h>
/*#include"data.h"*/
#define pi 3.14
#define r 5
#define add(x,y) x+y
#define FLAG 0
int main()
{
    // value = true=1 or false=0
    #if FLAG
        printf("This is our main file");
        int area = pi * r * r + add(3,4); // 3.14*5*5+3+4
    #else
        prinf("This is our Compiler control directive");
    #endif

    return 0; 
}