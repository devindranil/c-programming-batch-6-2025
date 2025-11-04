
#include<stdio.h>
#include<stdbool.h>
int main()
{
    // declaration of variable
    // syntax -> data type var name;
    int num1;
    // value assign
    // syntax -> var name = value; where = means assignment operator
    num1 = 20;

    // declaration and assigning in one line of code
    //  L-value = R-value
    // L-value represent the memory storage or location 
    // R-value represent the value which store inside that location
    int num2 = 25;

    // for output we use format specifier (%d %f %s %c etc)
    printf("The value of the number 1 and number 2 is: %d and %d",num1,num2);

    /*data types*/
    int bookId = 101; // integer
    char bookName[] = "C Programming books"; // string
    float bookPrice  = 455.55;
    int bookQty = 12;
    char bookCover = 'H'; // character
    bool isAvailiable = true;

    printf("The book id: %d\n",bookId);
    printf("The book name: %s\n",bookName);
    printf("The book price: %.1f\n",bookPrice);
    printf("The book id: %d\n",bookQty);
    printf("The book cover: %c\n",bookCover);
    printf("The book availiable: %d\n",isAvailiable);

    // how to check memory size of datya type
    printf("The memory size is: %d\n",sizeof(bookId)); // 4 bytes
    printf("The memory size is:  %d\n",sizeof(bookName)); // depends on number of character ( char = 1 bytes, total number of charcater of a string 20 then length of the string or size is 1*20 = 20 bytes)
    printf("The memory size is: %d\n",sizeof(bookPrice)); // 4 bytes
    printf("The memory size is: %d\n",sizeof(bookQty)); // 4 bytes
    printf("The memory size is: %d\n",sizeof(bookCover)); // 1 bytes
    printf("The memory size is: %d\n",sizeof(isAvailiable)); // 1 bytes


    return 0; 
}