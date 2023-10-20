#include "main.h"

/**
 * _strcpy - This copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{

int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
		dest[x] = '\0';
	}

	return (dest);
}
