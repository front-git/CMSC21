/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

/* This line declares the argument count and argument values on the main function. */
int main(int argc, char *argv[])
{
    /* Defines the array 'planets' with its elements. */
    char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};

  /* Declaration of variables 'i' and 'j' for the succeeding for loop */
  int i, j;

  /* This for loop will contione for as long as the argument count  */
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++)
      if (strcmp(argv[i], planets[j]) == 0) {
        /* Affirmative Output Code */
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    /* Negative Output Code */
    if (j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}
