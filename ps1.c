//1. write a c program to read the value of an integer m and display the value of n is 1 when m is larger than 0,0 when m is 0 and-1 when m is less then 0


#include<stdio.h>
int main()
{
	int m;
	printf("Enter a number : ");
	scanf("%d",&m);
	
	if
	(m<0)
	{
		printf(" Value of n =-1",m);
	}
	else if
	(m==0)
	{
		printf(" Value of n =0",m);
	}
	else if
	(m>1)
	{
		printf(" Value of n =1",m);
	}
	return 0;
}