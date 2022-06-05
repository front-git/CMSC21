/*Program to Print a One-Month Reminder List*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Code defines the maximum number of reminders the user can enter*/
#define MAX_REMIND 50
/*Code defines the mnaximum length of reminders' message the user can enter*/
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void){
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    char day, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("--No space left --\n");
            break;
        }
        printf("Enter day and reminder: ");
        /* 'scanf' reads the days on the user's input */
        scanf("%2d", &day);
        if(day == 0){
            break;
        }
        /* 'sprintf' writes the output into a string into 'day_str'. */
        sprintf(day_str, "%2d", day);
        read_line(msg_str, MSG_LEN);

        for(i = 0; i < num_remind; i++){
            /* 'strcmp' does the comparisons to determine where the day belongs in the array. */
            if(strcmp(day_str, reminders[j - 1]));
        }

        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }
        /* 'strcpy' moves all strings down one position. */
        strcpy(reminders[i], day_str);
        /* 'strcat' appends the reminder to the day. */
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++){
        printf("%s\n", reminders[i]);
    }

    system("PAUSE");
    return 0;
}

/* 'read_line' reads the reminders on the user's input */
int read_line(char str[], int n){
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}
