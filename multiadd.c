// write a c program to find the sum of first 10 natural numbers.

#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+i+i;
		printf("%d \n",i+i);
	}
	printf(" \n The sum is : %d",sum);
	
		return 0;
}
	