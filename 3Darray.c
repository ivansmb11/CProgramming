/*LISTING 8.3 randomarray.c: Creating a Multidimensional Array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  /* Declare a three-dimensional array with 1000 elements */

int random_array[10][10][10];
int a, b, c;

srand(time(0));

int main(void)
{
	/* Fill the array with random numbers. The C library */
	/* function rand() returns a random number. Use one */
		/* for loop for each array subscript. */

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				random_array[a][b][c] = srand();
			}
		}
	}

	/* Now display the array elements 10 at a time */

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				printf("\nrandom_array[%d][%d][%d] = ", a, b, c);
				printf("%d", random_array[a][b][c]);
			}
			printf("\nPress Enter to continue, CTRL-C to quit.");

			getchar();
		}
	}
	return 0;
}   /* end of main() */

