#include "main.h"

/**
 * print_array - This prints the elements of an array of integers.
 * @a: This is the array.
 * @n: This is the number of elements to be printed.
 */

void print_array(int *a, int n)
{

int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
