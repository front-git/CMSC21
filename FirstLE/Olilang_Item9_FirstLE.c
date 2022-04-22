#include <stdio.h>
int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';
    while(row){
        printf("Enter square size: ");
        scanf("%d", &size);
        for(row = 0 ;row < size ; row++){
            for(column = 0 ;column < size ;column++){
                if (row == 1 || row == size || column == 1 || column == size){
                    printf("*");
                }else{
                    printf(" ");
                }
        }
        return 0;
}
        printf("Print another square? Enter y or n: ");
        scanf("%c", &cont);
        if (cont == 'n'){
        printf("END");
        } else if (cont != 'y' || cont != 'n' ){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf("%c", &cont);
            if (cont == 'n'){
            printf("END");
            } else if (cont != 'y' || cont != 'n' ){
                printf("Not a valid choice. \n");
                printf("Print another square? Enter y/n: ");
        }
    }
    return 0;
}
}
