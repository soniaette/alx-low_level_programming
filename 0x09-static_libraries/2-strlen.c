#include "main.h"

/**
 *  _strlen - This returns the length of a string.
 *  @s: This is the string to get the length of.
 *
 *  Return: The length of the string @s
 */

int _strlen(char *s)
{

int x;
int num = 0;

	for (x = 0; s[x] != '\0'; x++)
		num++;
	return (num);
}
