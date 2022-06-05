#include <stdio.h>
#define M 8
#define N 8
int main()
{
  /* Array is declared and initialized */
  int array[M][N] =
 		{{1,1,0,0,0,1,0,0},{1,1,1,0,0,0,0,0},{0,1,1,0,1,1,0,0},{0,0,0,1,1,0,0,0},{0,0,0,1,1,0,0,0},{1,0,1,0,0,1,0,0},{1,0,0,1,0,0,1,0},{0,0,0,0,0,1,0,1}};

  /* For loops are used to display the 2D array */
  int f;
  printf("A\t\tB\t\t[C]\t\t[D]\t\tE\t\tF\t\tG\t\tH\n");

  /* This outer loop is for the rows */
  for(int f=0; f<M; f++) {
    /* This nested loop is for the columns */
    for(int r=0; r<N; r++) {
        printf("%d\t\t", array[f][r]);
    }
    printf("\n"); /* For the program to print new line */
  }

  //point location
  printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n5");
  printf("\nAt point: F");
  printf("\nNow at point A");
  printf("\nNow at point B");
  printf("\nNow at point C");
  printf("\npoint: C arrived to charging station");

  return 0;
}
