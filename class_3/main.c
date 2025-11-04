#include<stdio.h>
#include<float.h>
int main()
{
    /* Type casting in c programming*/
    /*
        Convert one type into other type(ex, int->float, float->int)
        two types = 1.Implicit type casting
            also called Type promotion
            compiler automatically done the type casting

            2.Explicit type casting
            also called casting operator
            use cast operator
            syntax = (type) expression
            expression = x+y/5-10*2%8 (later operator)
    */

    // Example of Implicit type casting
    /*int a; //4 bytes, 32 bits
    double b = 5.054; //memory create 8 bytes, 64 bits
    a=b; //value assign type casting happen(Implicit)
    printf("Value of a is: %lf\n",b);
    printf("Value of b is: %d\n",a);*/

    // Example of Explicit type casting
    // int x=7;
    // int y=2;
    // double res;
    // res=(double)x/y; // this is / called division operator, it's return a quotient value
    // printf("%.1lf",res);

    /* float vs double*/
    float pi = 3.1415926535897935698;
    double d_pi = 3.14159265358979356989;
    /* Precision value*/

    // after point . how many digit exactly same as the value which we store inside the variable
    // float precision = 6 digit
    // double precision = 15 digit
    // printf("%.10f\n",pi); //rounding
    // printf("%.15lf",d_pi);

    /*memory size*/
    /*
        float = 4 bytes = 32 bits
        double = 8 bytes = 64 bits
        to check size use sizeof()
    */

    // compare using array
    // float float_arr[] = {1.54,2.5,3.67,4.5,5.2};
    // double double_arr[] = {1.54,2.5,3.67,4.5,5.2};

    // // how array calculated the memory
    // // array = size of the data type * size of the array (total no of elements in the array)
    // // float_arr = 4 * 5 = 20 bytes
    // // double_arr = 8*5 = 40 bytes

    // printf("%d\n",sizeof(float_arr));
    // printf("%d",sizeof(double_arr));

    /* range */
    printf("Range of the float data is: %e and %e\n",FLT_MIN,FLT_MAX);
    printf("Range of the double data is: %e and %e\n",DBL_MIN,DBL_MAX);

    return 0; 
}