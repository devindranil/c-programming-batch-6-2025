#include <stdio.h>
int main()
{
    // print from 1 to 10
    // How many types of loops in c programming
    /*1. Entry controlled loop (while, for) 99% use
      2. Exit controlled loop (do-while loop) not very much important
    */

    /*while loop example*/
    /*print number between 1 to 10*/
    // int i=100; // loop variable -> Initialization part
    //  how many no of times loop itereate
    //  condition part

    /*for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }*/

    // do while loop - exit controlled loop
    // 1st itereation no condition check
    // int i=15;
    /*do{
        printf("%d\n",i);
        i++;
    } while(i<=10);*/

    /* break and continue statement*/
    int i = 1;
    while (i <= 10)
    {
        /*if(i==5){
            
            break;
        }else{
            printf("%d\n",i);
            i++;
        }*/
        if (i%2==0)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}

/* for loop*/

/*
i=1, print 1, i=2
i=2, print 2, i=3





i=10, print 10, 11
i=11 condition false
*/