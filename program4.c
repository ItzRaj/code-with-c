
//4. Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially.


#include<stdio.h>
int main()
{
    char firstname[30],lastname[30],year_of_birth[30];
    printf("\n enter your firstname: ");                 //input :	Tom
    scanf("%s", &firstname);
    printf("enter your lastname: ");                     //input : Davis
    scanf("%s", &lastname);
    printf("enter Year of Birth: ");                     //input : 1982
    scanf(" %s", &year_of_birth);
    printf(" %s", firstname );
    printf(" %s", lastname);
    printf(" %s", year_of_birth );                          
    return 0;                                            //output : Tom Davis 1982
}