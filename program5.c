
//5.Write C program to perform addition ,subtraction ,multiplication ,division of two numbers.


#include<stdio.h>
int main()
{
    int a,b,add,sub,multi;     
    float div;
    printf("Enter the First number: ");                                  //input :10
    scanf("%d", &a);
    printf("Enter the Second Number: ");                                 //input :5
    scanf("%d", &b );
    add=(a+b);
    sub=(a-b);
    div=(a/b);
    multi=(a*b);
    printf("\n the sum of the given numbers: %d", add);                  //output : 15 
    printf("\n the difference of the given numbers: %d",sub);            //output : 5
    printf("\n the product of the given numbers: %d",multi);             //output : 50
    printf("\n the quotient of the given numbers: %f", div);             //output : 2.000000
}