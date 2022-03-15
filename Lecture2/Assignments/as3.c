//LECTURE 2 ASSIGNMENT #3
#include<stdio.h>
int main(void){
    int i, j, k;

    i = 3; j=4; k=5;
    printf("a) %d\n", i < j || ++j < k);
    //Output: a) 1
    i = 7; j = 8; k = 9;
    printf("\nb) %d\n",i - 7 && j++ < k);
    //Output: b) 0
    i = 7; j = 8; k = 9;
    printf("\nc) %d\n", (i = j) || (j == k));
    printf("   %d %d %d\n", i, j, k);
    /*Output: c) 1
                 8 8 9*/
    i = j = k = 1;
    printf("\nd) %d", ++i || ++j && ++k);
    printf("\n   %d %d %d\n", i, j, k);
    /*Output: d) 1
                 2 1 1*/
}
