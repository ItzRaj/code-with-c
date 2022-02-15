
//2. write a program in c to find the largest of the three numbers.
	//output 1st no=12	2nd no =25	3rd no =52 and 3rd is the greatest among three

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the 1st number ,2nd number ,3rd number ");
	scanf("%d %d %d",&a, &b, &c);
	printf("the 1st number is %d",a);
	printf("\t the 2nd number is %d",b);
	printf("\t the 3rd number is %d",c);
	if
	((a>b)&&(a>c))
	{
	printf("\n 1st number is gretest among three numbers ");
	}
	else if
	((b>a)&&(b>c))
	{
	printf("\n 2nd number is greatest among three numbers ");
	}
	else
	{
		printf("\n 3rd number is greatest among three numbers ");
	}
	return 0;
}
	