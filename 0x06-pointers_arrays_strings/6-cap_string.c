#include "main.h"

/**
 * cap_string - This capitalizes all words of a string.
 * @str: This is the string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;

		if (str[x - 1] == ' ' ||
		    str[x - 1] == '\t' ||
		    str[x - 1] == '\n' ||
		    str[x - 1] == ',' ||
		    str[x - 1] == ';' ||
		    str[x - 1] == '.' ||
		    str[x - 1] == '!' ||
		    str[x - 1] == '?' ||
		    str[x - 1] == '"' ||
		    str[x - 1] == '(' ||
		    str[x - 1] == ')' ||
		    str[x - 1] == '{' ||
		    str[x - 1] == '}' ||
		    x == 0)
			str[x] -= 32;

		x++;
	}

	return (str);
}
