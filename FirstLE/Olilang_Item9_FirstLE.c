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
        for(row = 0 ;row <= size ; row++){
            /*Code determining the output square 
            in terms of its columns*/
            for(column = 0 ;column <= size ;column++){
                /*Code which prints the output hollow square 
                with '*' as its borders*/
                if (row == 0 || row == size || column == 0 || column == size){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("Print another square? Enter y or n: ");
        scanf(" %c", &cont);
        if (cont == 'n'){
            printf("END");
        }else if (cont == 'x'){
            printf("Not a valid choice. \n");
            
            printf("Print another square? Enter y or n: ");
            scanf(" %c", &cont);
        }
            
}
    return 0;
}
