#include <stdio.h>
int main(void)
{
int age;
printf("Please type in your age. \n> ");
scanf("%d", &age);
    if (age >= 13 && age <= 19){
        printf("\nCongratulations! You are a teenager.\n");
        }
    else{
        printf("\nIt seems that you are not a teenager.\n");
        }
 }
