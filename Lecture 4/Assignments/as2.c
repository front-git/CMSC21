#include <stdio.h>
int main(void)
{
    int loop1(void);
    {
     int i;
     i = 1;
     while (i < 10) {
     printf("%d ", i);
     i *= 2;
     }
     return 0;
    }
    int loop2(void);
     {
     int i;
     i = 1;
     for (; i < 10;) {
     printf("%d ", i);
     i *= 2;
     }
     return 0;
     }
     int loop3(void);
     {
     int i;
     i = 1;
     do{
     printf("%d ", i);
     i *= 2;
     }while (i < 10);
     return 0;
    }
}

