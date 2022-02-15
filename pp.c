 // centigrade to fahrnite
 
 
 #include<stdio.h>
 int main()
 
  {

  int c,farhnite;
  printf("enter the temperature in centigrade ");
  scanf("%d",&c);                                             // farhnite = centigrade*9/5+32
 
   farhnite=((c*9/5)+32);
    
	printf(" the given temperature in farhnite =  %d",farhnite);
	
	return 0;
}