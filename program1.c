
// 1. Write a program that converts Centigrade to Fahrenheit.


#include<stdio.h>
int main()                              // centigrade*9/5+32=farhnite
{
float i,c,fahrenhite;
printf("Enter the temperature in centigrate ");            //input : 45
scanf("%f",&c);
//i=((c*9)/5);  
 fahrenhite=(((c*9)/5)+32);
//fahrenhite=(i+32);
printf("\n\n temperature in fahrenite:%f ",fahrenhite);     //output : 113.000000
return 0;
}