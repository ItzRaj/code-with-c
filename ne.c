// write a c program to read the value of an integer m and display the value of n is 1 when m is larger
// when m is larger than 0,0 when m is 0 and-1 when m is less then 0


#include<stdio.h>
void main()
{
int a;
printf("Enter a number ");
scanf("%d",&a);

if
(a<0)
{
	printf(" value of n=-1");
}
else if
(a==0)
{
	printf(" value of n=0");
}
else if
(a>0)
{
	printf(" value of n=1");
}

}
