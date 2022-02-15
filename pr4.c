
// write a c program to create calculator using switch case and function.

// test data 
//enter the value 1:20
//enter the value 2:60
//operation : +


#include<stdio.h>
int main()
{
	float a,b,s,k;
	printf(" enter the value1 ");
	scanf("%f",&a);
	printf(" enter the value2 ");
	scanf("%f",&b);
	printf(" enter the operation: ");
	scanf("%s",&k);
	
	switch(k)
	{
		                                               //problem    ???
	case '+':
	s=(a+b);
	printf(" The addition of given numbers are %d",s  );
	break;
	
	case '-':
	s=(a-b);
	printf("The substraction of given numbers are &d",s );
	break;
	
	case '*':
	s=(a*b);
	printf("The multiplication of given numbers are %f",s );
	break;
	
	case '/':
	s=(a/b);
	printf("The division of given numbers are %f",s);
	break;
	
	default:
	printf("invalid input");
	break;
	
	}
	return 0;
}