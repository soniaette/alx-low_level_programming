#include "main.h"

/**
 * string_toupper - This changes all lowercase letters
 *                  of a string to uppercase.
 * @str: This is the string to be changed.
 *
 * Return: A pointer to the changed string.
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;

		x++;
	}

	return (str);
}
