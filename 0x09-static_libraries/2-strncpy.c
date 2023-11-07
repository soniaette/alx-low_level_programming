#include "main.h"

/**
  * _strncpy - This copies an inputted number
  *            of bytes from string src into dest.
  * @src: This is the source string.
  *
  * @dest: This is the buffer to store the string copy.
  *
  * @n: This is the maximum number of bytes to be copied from src.
  *
  * Return:  A pointer to dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
	dest[k] = src[k];
	k++;
	}
	while  (k < n)
	{
	dest[k] = '\0';
	k++;
	}
	return (dest);
}
