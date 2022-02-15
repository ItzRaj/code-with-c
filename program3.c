
//3. Write a C program that takes hours and minutes as input and calculates the total number of minutes.


#include<stdio.h>
int main()
{
     int hr,min,total;
     printf("Enter in hour: ");                       //input : 5
     scanf("%d",&hr );
     printf("Enter in minutes: ");                    //input : 37
     scanf("%d",&min );
     total=((60*hr)+min);
     printf("total = %d minutes",total );             //output : 337
}