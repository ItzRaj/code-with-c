// write a program in c to display the multiplication table of a given integer.

#include<stdio.h>
int main()
{
	int a,i,j;
	printf(" Enter a number ");
	scanf("%d",&a);
	
	for(a,i=1,j=1;i<=10;i++)          
	{
		j=a*i;
		printf("%d x %d = %d\n",a,i,j);
	}
	return 0;
}