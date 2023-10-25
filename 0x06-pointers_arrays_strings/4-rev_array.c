#include "main.h"

/**
 * reverse_array - This reverses the content of an array of integers.
 * @a: This is the array of integers to be reversed.
 * @n: This is the number of elements in the array.
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int tmp, x;

	for (x = n - 1; x >= n / 2; x--)
	{
		tmp = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = tmp;
	}
}
