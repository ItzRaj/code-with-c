// 4. write a c program to read temperaturein centigrade and display a suitable message according to temperature state below.

//temp <0 then freesing weather
//temp 0-10 then very cold weather
//temp 10-20 then cold weather
//temp 20-30 then normal in temp
//temp 30-40 then it is hot


#include<stdio.h>
int main()
{
	int a;
	printf("Enter the temperature in centigrade : ");
	scanf("%d",&a);
	if 
	(a<=0)
	{
	  printf(" Its Freesing weather");
	}
	else if
	((a>0)&&(a<=10))
	{
	   printf(" Its Very cold weather");
	}
	else if
	((a>10)&&(a<=20))
	{
	   printf( " Its Cold weather");
	}
	else if
	((a>20)&&(a<=30))
	{
	   printf(" Its Normal weather");
    }
	else if
	((a>30)&&(a<=40))
    {
	   printf(" Its Hot weather");
	}
	else if
	(a>40)
	{
		printf(" Its Very hot weather");
	}
	return 0;
	
 }
	
	