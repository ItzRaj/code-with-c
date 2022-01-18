
//2. Write a C program that points the perimeter of the rectangle to take its length and breadth as input.


#include<stdio.h>
int main()
{
	float l,b,perimeter=0;
	printf("enter the length of the the rectangle: ");                    //input : 5
	scanf ("%f",&l);
	printf("enter the breadth of the rectangle: ");                       //input : 7
	scanf ("%f",&b);
	perimeter=((l+b)*2);                                     
	printf("\n\n the perimeter of the rectangle is = %f",perimeter);     //output : 24.000000
	return 0;
}
	
	