#include <stdio.h>
#include <conio.h>
int main()
{
    int i,days_amount,first_day;
    do{
        printf("Enter the number of days.\n> ");
        scanf("%d",&days_amount);
    }while(days_amount<28 | days_amount>31);
    do{
                printf("\nEnter the number of the starting day (1 - Sunday to 7 - Saturday):\n> ");
                scanf("%d",&first_day);

    }while(first_day<0 | first_day>7);
    printf("\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n");
    for(i=1;i<=days_amount+first_day-1;i++)
    {
                              if(i<first_day)
                              {
                                       printf(" \t");
                              }
                              else
                              {
                                        printf("%d\t",i-first_day+1);
                              }
                              if((i%7)==0)
                              printf("\n");
    }


    getch();
    return 0;
}
