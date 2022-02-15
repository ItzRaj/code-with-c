//write a c program to display n terms of odd natural number and their sum.

#include<stdio.h>
int main()
{
 int n,i=1,sum=0;
printf(" Enter the  last term ");
scanf("%d",&n);

for(i;i<=n;i=i+2)
{
	printf("%d ",i);
	sum=(sum+i);
}
printf("the sum of odd numbers %d",sum);
return 0;
}