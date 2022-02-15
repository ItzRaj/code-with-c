//4. write a c program to show the sum ,substract,multiplication of two number using function.

#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mult (int,int);
int main()
{
int n1,n2;
printf("Enter the two number one by one: ");
scanf("%d %d",&n1,&n2);

sum(n1,n2);
sub(n1,n2);
mult(n1,n2);
}
int sum(int n1,int n2)
{
float sum;
sum=n1+n2;
printf("\n Sum of the numbers = %.2f",sum);
}
int sub(int n1,int n2)
{
float sub;
sub=n1-n2;
printf("\n Substraction of the numbers = %.2f",sub);
}
int mult(int n1,int n2)
{
float mult;
mult=n1*n2;
printf("\n Multiplication of two numbers = %.2f",mult);
}