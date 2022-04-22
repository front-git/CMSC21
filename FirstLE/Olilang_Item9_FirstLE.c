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
    //While loop starts the code if the user prompts 'y'.
    while(cont == 'y'){
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
        /*Question prompt appears and asks the user 
        after program finishes on the first hollow square*/
        printf("Print another square? Enter y or n: ");
        scanf(" %c", &cont);
        /*If the user answers no, then the
        program will end.*/
        if (cont == 'n'){
            printf("END");
        /*If the user answers a different input
        other than yes or no, then it will catch and
        inform the user that it is an invalid input.*/
        }else if (cont != 'y' || cont != 'n'){
            printf("Not a valid choice. \n");
            /*The prompt will once again appear to print another 
            square until the user answers n to end the program.*/
            printf("Print another square? Enter y or n: ");
            scanf(" %c", &cont);
        }
            
}
    return 0;
}
