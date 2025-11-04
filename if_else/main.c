#include <stdio.h>
#include<math.h>
int main()
{
    /*5.Write a program to check whether a number is negative or positive or zero*/
    // If statement
    //int num;
    //printf("Enter the value of number: \n");
    // user input
    // & = address of operator
    //scanf("%d", &num);
    // if expression any non zero value means 15, 20, -25, -55 always return True, and true means if statement execute
    /*if (num < 0)
    {
        // body of if statement
        printf("%d is the negative number", num);
    }
    else if (num == 0)
    {
        printf("%d is the zero number", num);
    }
    else
    {
        printf("%d is the positive number", num);
    }*/

    /*2.Write a program to find the maximum between three numbers*/
    // by using nested if else statement
    /*
        if(){
            if(){
                if(){

                }else{

                }
            }else{
            }
        }else{
            if(){

            }else{

            }   
        }
    */

    /*if(num1>num2){
        if(num1>num3){
            printf("%d is an largest number",num1);
        }else{
            printf("%d is an largest number",num3);
        }
    }else{
        if(num2>num3){
            printf("%d is an largest number",num2);
        }else{
            printf("%d is an largest number",num3);
        }
    }*/

    /*6.Write a program to check whether a number is divisible by 5 and 11 or not*/
    // num%5==0 && num%11==0

    /*if((num%5==0) && (num%11==0)){
        printf("%d is the number which is divisible by both 5 and 11",num);
    }else{
        printf("%d is not divisble by 5 and 11",num);
    }*/

    /*if(num%5==0){
        if(num%11==0){
            printf("%d is the number which is divisible by both 5 and  11",num);
        }else{
            printf("%d is not divisble by 5 and 11",num);
        }
        
    }else{
        printf("%d is not divisble by 5 and 11",num);
    }*/

    /*9.Write a program to check whether the year is a leap year or not*/
    // year%400==0 then year is leap year
    // year%4==0 and year%100!=0 then leap year
    /*int year;
    printf("Enter any Year: ");
    scanf("%d",&year);*/
    /*if(year%400==0){
        printf("%d year is an Leap year",year);
    }else if(year%4==0 && year%100!=0){
        printf("%d year is an Leap year",year);
    }else{
        printf("%d year is not a Leap year",year);
    }*/

    /*if((year%400==0) || (year%4==0 && year%100!=0)){
        printf("%d year is an Leap year",year);
    }else{
        printf("%d year is not a Leap year",year);
    }*/

    /*17 no question*/

    /*int math,phy,chem,totalOfThreeSubject,totalOfMathPhy;
    printf("Enter the value of Math: \n");
    scanf("%d",&math);
    printf("Enter the value of Physics: \n");
    scanf("%d",&phy);
    printf("Enter the value of Chemistry: \n");
    scanf("%d",&chem);

    totalOfThreeSubject = math+phy+chem;
    printf("Total of Three subjects is: %d\n",totalOfThreeSubject);
    totalOfMathPhy = math+phy;
    printf("Total of Math and Physics subjects is: %d\n",totalOfMathPhy);

    if(math>=65 && phy>=55 && chem>=50){
        if(totalOfThreeSubject>=180 || totalOfMathPhy>=140){
            printf("Yes you are eligibile for admission");
        }else{
            printf("You are not elgible for admission");
        }
    }else{
        printf("You are not elgible for admission");
    }*/

    /*20 no question*/
    /*double basic_salary, gross_salary, da, hra, annual_salary;

    printf("Enter your basic monthly salary: ");
    scanf("%lf",&basic_salary);

    if(basic_salary<=10000){
        da=basic_salary*0.8;
        hra=basic_salary*0.2;
    }else if(basic_salary<=20000){
        da=basic_salary*0.9;
        hra=basic_salary*0.25;
    }else{
        da=basic_salary*0.95;
        hra=basic_salary*0.3;
    }

    gross_salary = basic_salary + da + hra;
    annual_salary = gross_salary*12;

    printf("Your basic Monthly salary is: %.2lf\n",basic_salary);
    printf("------------------------");
    printf("Your DA is: %.2lf\n",da);
    printf("Your HRA is: %.2lf\n",hra);
    printf("------------------------");
    printf("Your basic Monthly salary is: %.2lf\n",basic_salary);
    printf("Your Monthly Gross salary is: %.2lf\n",gross_salary);
    printf("Your Annual Gross salary is: %.2lf",annual_salary);
    printf("------------------------");*/

    /*Compound Interest*/
    /*
        CI = P*(1+R/100)^T
        CI = Compound Interest
        P = Principal Amount
        R = Rate of Interest
        T = Time

        assume, 
        T = 2
        R = 6.9%
    */
   double pi, rate, ci;
   int time;
   printf("Enter the principal amoount: \n");
   scanf("%lf",&pi);
   printf("Enter the rate of Interest: \n");
   scanf("%lf",&rate);
   printf("Enter the Time: ");
   scanf("%d",&time);

   /*
   CI = P*(1+R/100)^T
   */

   ci = pi * pow((1+rate/100),time);
   printf("The compunded value is: %lf",ci);


    
    

    
    return 0;
}