 // write a program in c to find the square of any number using the function.
 
 #include<stdio.h>
 int square(int);
 int main()
 {
 int a;
 float b;
 printf("Enter a number for square: ");
 scanf("%d",&a);
 square(a);
 b=square(a);
 printf("\n The square of the %d is = %.2f",a,b);
 }
 int square(int a)
 {
 return a*a;
 }
 