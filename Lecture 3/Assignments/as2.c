#include<stdlib.h>
#include<stdio.h>
void main() {
 long num, div, n1;
 int flag, digit, pos, tot_dig;

 printf("Greetings! This program is designed to convert numbers into words.\nEnter a number.\n> ");
 scanf("%ld", &num);

 if(num == 0) {
 printf("Zero\n");
 exit(0);
 }

 if(num > 99999) {
 printf("Please enter a number between 0 and 100000.\n");
 exit(0);
 }

 tot_dig = 0;
 div = 1;
 n1 = num;

 while ( n1 > 9 ) {
 n1 = n1 / 10;
 div = div * 10;

 tot_dig++;
 }


 tot_dig++;
 pos = tot_dig;

 while ( num != 0 ) {
 digit = num / div;
 num = num % div;
 div = div / 10;
 switch(pos) {
 case 2:
 case 5:
 if ( digit == 1 )
 flag = 1;
 else {
 flag = 0;
 switch(digit) {
 case 2: printf("Twenty ");break;
 case 3: printf("Thirty ");break;
 case 4: printf("Forty ");break;
 case 5: printf("Fifty ");break;
 case 6: printf("Sixty ");break;
 case 7: printf("Seventy ");break;
 case 8: printf("Eighty ");break;
 case 9: printf("Ninety ");
 }
 }
 break;
 case 1:
 case 4:
 if (flag == 1) {
 flag = 0;
 switch(digit) {
 case 0 : printf("Ten ");break;
 case 1 : printf("Eleven ");break;
 case 2 : printf("Twelve ");break;
 case 3 : printf("Thirteen ");break;
 case 4 : printf("Fourteen ");break;
 case 5 : printf("Fifteen ");break;
 case 6 : printf("Sixteen ");break;
 case 7 : printf("Seventeen ");break;
 case 8 : printf("Eighteen ");break;
 case 9 : printf("Nineteen ");
 }
 } else {
 switch(digit) {
 case 1 : printf("One ");break;
 case 2 : printf("Two ");break;
 case 3 : printf("Three ");break;
 case 4 : printf("Four ");break;
 case 5 : printf("Five ");break;
 case 6 : printf("Six ");break;
 case 7 : printf("Seven ");break;
 case 8 : printf("Eight ");break;
 case 9 : printf("Nine ");
 }
 }

 if (pos == 4)
 printf("Thousand ");
 break;

 case 3:
 if (digit > 0) {
 switch(digit) {
 case 1 : printf("One ");break;
 case 2 : printf("Two ");break;
 case 3 : printf("Three ");break;
 case 4 : printf("Four ");break;
 case 5 : printf("Five ");break;
 case 6 : printf("Six ");break;
 case 7 : printf("Seven ");break;
 case 8 : printf("Eight ");break;
 case 9 : printf("Nine ");
 }
 printf("hundred ");
 }
 break;
 }
 pos--;
 }
 if (pos == 4 && flag == 0)
 printf("Thousand");
 else if (pos == 4 && flag == 1)
 printf("Ten Thousand");

 if (pos == 1 && flag == 1)
 printf("Ten ");
}
