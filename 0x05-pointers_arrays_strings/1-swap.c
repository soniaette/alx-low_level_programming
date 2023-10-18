#include "main.h"

/**
 * swap_int - This swaps the values of two integers.
 * @a: This is the first integer to be swapped.
 * @b: This is the  second integer to be swapped.
 */

void swap_int(int *a, int *b)
{

	int hold;

	hold = *a;
	*a = *b;
	*b = hold;

}
