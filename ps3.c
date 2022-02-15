
//3. write a c program to read roll no, name and marks of three subjects an calculate the total marks, percentage and division.



#include<stdio.h>
int main()
{
	int phy,chem,comp,roll,total;
	float per;
    char a[20];
	
	printf("Enter your roll no= ");
	scanf("%d",&roll);
	printf("Enter your name= ");
	scanf("%s",&a);
	printf("Enter marks of physics, chemestry and computer = ");
	scanf("%d %d %d", &phy, &chem, &comp);
	printf("Roll no: %d\n",roll);
	printf("Name: %s\n",a);
	total=(phy+chem+comp);
	printf("Total marks =%d\n", total);
	per=(total*100/300);
	printf("Percentage is =%f\n",per);
	
	if
	(per>=60)
	
	{
		printf("CONGRATULATIONS FIRST DIVISION");
	}
	else if
	(per>=50)
	
	{
		printf("GOOD SECOND DIVISION");
	}
	else if
	(per>=40)
	
	{
		printf("FAIR THIRD DIVISION");
	}
	else
	{
		printf("FAIL");
		
		return 0;
	}
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		