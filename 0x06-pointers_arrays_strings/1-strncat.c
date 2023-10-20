#include "main.h"

/**
 * _strncat - This concatenates two strings using
 *            an inputted number of bytes from src.
 * @dest: This is the string to be appended upon.
 * @src: This is the string to be appended to dest.
 * @n: This is the number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
