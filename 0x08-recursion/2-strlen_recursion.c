#include "main.h"

/**
 * _strlen_recursion - This returns the length of a string.
 * @s: This is the string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
