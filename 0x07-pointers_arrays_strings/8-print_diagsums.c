#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - This prints the sum of the two diagonals
  *			of a square matrix of integers.
  *
  * @size: This is the size of the matrix.
  *
  * @a: This is the matrix of integers.
  *
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int count1 = 0;
	int count2 = 0;
	int x;


	for (x = 0; x < size; x++)
	{
	count1 = count1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
	count2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
