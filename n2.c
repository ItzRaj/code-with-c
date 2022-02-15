// write a c program to swap two numbers using a function.

#include<stdio.h>
int swap(int,int);
int main()
{
int n1,n2;
printf("Enter 1st number: ");
scanf("%d",&n1);
printf("Enter 2nd number: ");
scanf("%d",&n2);
printf("Before swaping: n1=%d, n2=%d",n1,n2);
swap(n1,n2);
}
int swap(int n1,int n2)
{
int temp;
temp=n1;
n1=n2;
n2=temp;

printf("\n After swaping: n1=%d, n2=%d",n1,n2);
}
