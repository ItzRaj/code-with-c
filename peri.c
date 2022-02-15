//write a program to find the perimeter of a rectangle.


#include<stdio.h>
int main()
{

   int length,breadth,perimeter;
   printf("Enter the length =  ");
   scanf("%d",&length);
   printf("Enter the breadth = ");
   scanf("%d",&breadth);
   
   perimeter=((length+breadth)*2 );
   printf(" The perimeter of the rectangle = %d",perimeter);
   
   return 0;
   
   }