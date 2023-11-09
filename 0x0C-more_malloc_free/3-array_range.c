#include "main.h"
#include <stdlib.h>

/**
 * array_range - This creates an array of integers ordered
 *		 from min to max, inclusive.
 * @min: This is the first value of the array.
 * @max: This is the last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *	   Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
