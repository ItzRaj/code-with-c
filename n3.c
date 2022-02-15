//3. write a c program to check a given number is even or odd using the function.

#include<stdio.h>
int check(int);
int main()
{
int a;
printf("Enter a number: ");
scanf("%d",&a);
check(a);
}
int check(int a)
{
if(a%2==0)
{
 printf("The given number is even ");
 }
 else
 {
 printf("The given number is odd ");
 }
 }