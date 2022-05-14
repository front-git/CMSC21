#include <stdio.h>
int main()
{
int base, exponent;
int result = 1;
printf("Greetings! This code is designed to computes for the power of any number.\n");
printf("Enter your base number.\n> ");
scanf("%d", &base);
printf("Enter your exponent.\n> ");
scanf("%d", &exponent);
for (exponent; exponent>0; exponent--)
{
result = result * base;
}
printf("The resulting value is:\n> %lld", result);
return 0;
}
