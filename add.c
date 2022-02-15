// write a program in c to add two numbers 
 
 //input   no1 : 5
//input 	no2 :6                                           
// output   11


    #include<stdio.h>                   //i=i+1 ;i=i-1; i=i+2;
     int main() 
 {
     int hr,min,conv;
     printf("enter in hour ");
     scanf("%d",&hr);
	 printf("enter in min ");
	 scanf("%d",&min);
	 
	 conv=(hr*(60)+min);
	 
	 printf(" the total time in minutes %d",conv);
	  
	  return 0;
 }
