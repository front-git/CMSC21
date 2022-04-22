//CMSC 21 Long Exam 1 - Item # 9
//Preprocessor Directive
#include <stdio.h>
//Main Function
int main(){
    /*Declarations for the variables row, column, and size as int;
    and variable cont as char.*/
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    //While loop starts the code.
    while(size == 0){
        //Program asks user input for square size.
        printf("Enter square size: ");
        scanf("%d", &size);
        /*Code determining the output square 
        in terms of its rows*/
        for(row = 1 ;row <= size ; row++){
            /*Code determining the output square 
            in terms of its columns*/
            for(column = 1 ;column <= size ;column++){
                /*Code which prints the output hollow square 
                with '*' as its borders*/
                if (row == 1 || row == size || column == 1 || column == size){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        /*This part of the code does not work properly.
        I am admittedly unable to solve this part of the code
        as I have trouble understanding how the char data type
        works in C. I apologize for not raising this concern
        during your class or by email, Ma'am.*/
        printf("Print another square? Enter y or n: ");
        scanf("%c", &cont);
        if (cont == 'n'){
            printf("END");
        }else if (cont != 'y' || cont != 'n'){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y or n: ");
            continue;
        }
            
}
    return 0;
}
