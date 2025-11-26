#include<stdio.h>
int main()
{
    // 1D Array
    /*Compile Time initialization*/
    /*Array Literal*/
    //int rollNo[5]={101,102,103,104,105};
    /*Array Indexing*/
    /*int marks[3];
    marks[0]=95;
    marks[1]=88;
    marks[2]=62;*/

    /*Run-Time initialization*/
    int age[5];
    printf("Enter students age: \n");
    for(int i=0;i<=4;i++)
    {
       scanf("%d",&age[i]);
    }
   

    /*How to print the array*/
    // any one element
    /*printf("The value inside the RollNo array is %d",rollNo[5]);*/

    // all element print
    for(int i=0;i<5;i++)
    {
       printf("The value inside the array is: %d and it is located at index number %d\n",age[i],i); 
    }
    return 0;
}   
