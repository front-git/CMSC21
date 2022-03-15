//#2 - PROGRAM TO REVERSE 3-DIGIT NUMBERS
#include<stdio.h>
int main(void)
{
    int number, inverse = 0, rem;
    printf("Greetings! I am a program designed to reverse 3-digit numbers.\n\nPlease enter your 3-digit number.\n> ");
      scanf("%d", &number);
      while(number!=0)
      {
         rem = number % 10;
         inverse = inverse * 10 + rem;
         number/=10;
      }
      printf("\nThe reverse of your number is - %d\n", inverse);
    return 0;
}
