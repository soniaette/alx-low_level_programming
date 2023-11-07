#include "main.h"

/**
  * _memcpy - This copies @n bytes from the memory area pointed
  *		to by @src into that pointed to by @dest.
  *
  * @src: The source buffer to copy characters from.
  *
  * @dest: This is a pointer to the memory area to copy @src into.
  *
  * @n: This is the number of bytes to copy from @src.
  *
  * Return: A pointer to the destination buffer @dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
	dest[k] = src[k];
	}
	return (dest);
}
