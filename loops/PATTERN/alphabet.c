#include <stdio.h>
int main()
{
    char a = 'A'; // 65
    char b = 'C' ; // 67
    //printf("%d\n%d\n", a, b);
    
    char i, j;
    //char count = 'A'; 
    for (i = 'A'; i <= 'D'; i++)
    {
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
            
        }
        printf("\n");
    }
}